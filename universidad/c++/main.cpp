#include <iostream>
#include <fstream>
#include <vector>
#include <windows.h>
#include <string>
#include <time.h>
using namespace std;

BITCH LASAGNA SUBSCRIBE 2 PEWDIEPIE
	
//Tamaño de la memoria
const int KmemorySize = 2000;
const int KprintColour = 10;
const vector<int> colour_options = { 2, 3, 4, 6, 8, 11, 12, 13, 14, 15, 28, 38, 46, 54, 82, 86, 88, 90, 91, 92, 93, 94, 95 };
int procLine = 0;

//Clase para definir cada proceso
typedef struct {
    int arrival;
    int duration;
    int size;
    //int position;
    int colour;
    string name;
    bool isVoid = false;
}Tproces;

//Añade cada proceso leido del fichero de entrada al vector cola de espera
bool scheduleStart(string fileName, vector<Tproces> &wline) {

    ifstream entryFile(fileName.c_str());
    if(entryFile.is_open() == false) {
        cout << "Error en apertura del archivo '" << fileName << "'" << endl;
        return true;
    }

    else {
        unsigned int i;
        string line, dump;
        getline(entryFile, line);

        //Un simple bucle para leer el archivo de texto e introducir cada línea como un proceso a nuestro vector
        while(!entryFile.eof()) {
            Tproces auxProc;

            //Separando el nombre de la cadena
            for(i = 0; i < line.find_first_of(" "); i++) {
                dump.push_back(line[i]);
            }
            auxProc.name = dump;
            dump.clear();
            line = line.substr(i+1);
            
            //Separando el tiempo de llegada
            for(i = 0; i < line.find_first_of(" "); i++) {
                dump.push_back(line[i]);
            }
            auxProc.arrival = stoi(dump);
            dump.clear();
            line = line.substr(i+1);

            //Separando la duracion
            for(i = 0; i < line.find_first_of(" "); i++) {
                dump.push_back(line[i]);
            }
            auxProc.size = stoi(dump);
            dump.clear();
            line = line.substr(i+1);

            //Separando el tiempo de llegada
            for(i = 0; i < line.size(); i++) {
                dump.push_back(line[i]);
            }
            auxProc.duration = stoi(dump);
            dump.clear();

            auxProc.colour = colour_options[rand()%colour_options.size()];

            wline.push_back(auxProc);
            getline(entryFile, line);
        }
        entryFile.close();
        return false;
    }
}

bool scheduleSave(vector<Tproces> mem, ofstream &salida) {
    
    if(!salida.is_open()) {
        cout << "Error en apertura del archivo 'salida.txt'" << endl;
        return true;
    }

    else {

        int memdir = 0;

        salida << procLine << ": ";

        for(unsigned int i = 0; i < mem.size(); i++) {
            salida << "[" << memdir << " " << mem[i].name << " " << mem[i].size << "]";
            memdir += mem[i].size;
        }

        //salida.close();
        salida << endl;
    }


}

//Intercambia dos posiciones del vector de procesos
void swapSlots(int i, int j, vector<Tproces> &schedule) {

    Tproces aux;

    //Creamos copia del proceso i
    aux.name = schedule[i].name;
    aux.arrival = schedule[i].arrival;
    aux.duration = schedule[i].duration;
    aux.size = schedule[i].size;
    aux.isVoid = schedule[i].isVoid;
    aux.colour = schedule[i].colour;
    //aux.position = schedule[i].position;

    //Copiamos el proceso J encima del proceso I
    schedule[i].name = schedule[j].name;
    schedule[i].arrival = schedule[j].arrival;
    schedule[i].duration = schedule[j].duration;
    schedule[i].size = schedule[j].size;
    schedule[i].isVoid = schedule[j].isVoid;
    schedule[i].colour = schedule[j].colour;
    //schedule[i].position = schedule[j].position;

    //Escribimos el proceso I copiado previamente encima del proceso J
    schedule[j].name = aux.name;
    schedule[j].arrival = aux.arrival;
    schedule[j].duration = aux.duration;
    schedule[j].size = aux.size;
    schedule[j].isVoid = aux.isVoid;
    schedule[j].colour = aux.colour;
    //schedule[j].position = aux.position;

}

void copyT(Tproces &sol, Tproces data) {

    sol.name = data.name;
    sol.arrival = data.arrival;
    sol.size = data.size;
    sol.duration = data.duration;
    sol.isVoid = data.isVoid;
    sol.colour = data.colour;
    //sol.position = data.position;

}

//Imprime por pantalla el vector de procesos    --- devcheck
void printTprocesVector(vector<Tproces> &schedule) {
    
    for(unsigned int i = 0; i < schedule.size(); i++) {
        cout << "|" << schedule[i].name << "|" << schedule[i].arrival << "|" << schedule[i].size << "|" << schedule[i].duration << "|" << endl;
    }

}

//Decrementa en 1 el valor duracion de todos los procesos del vector, si se vuelve 0, convierte ese proceso en un hueco
void decrement(vector<Tproces> &schedule) {

    for(unsigned int i = 0; i < schedule.size(); i++) {

        if(!schedule[i].isVoid) {

            schedule[i].duration--;

            if(schedule[i].duration == 0) {
                schedule[i].isVoid = true;
                schedule[i].name = "Hueco";
                schedule[i].colour = colour_options[rand()%colour_options.size()];
            }

        }

    }

}

void decrementArrival(vector<Tproces> &waiting) {

    for(unsigned int i = 0; i < waiting.size(); i++) {
        waiting[i].arrival--;   
    }

}

void arrivalPass(vector<Tproces> &waiting, vector<Tproces> &schedule) {

    int passes = waiting.size();

    while(passes > 0) {

        for(unsigned int i = 0; i < waiting.size(); i++) {
            if(waiting[i].arrival == 0) {
                schedule.push_back(waiting[i]);
                waiting.erase(waiting.begin()+i);
                break;
            }
        }

        passes--;

    }

}

//Recorre el vector cola de procesos y si encuentra dos huecos juntos los une en uno grande en esa misma posicion;
int joinVoids(vector<Tproces> &schedule) {

    if(schedule.size() < 2) {
        return 0;
    }

    unsigned int i;
    int pos;
    int voidsJoineds = 0;

    while(1){

        pos = -1;

        for(i = 0; (i+1) < schedule.size(); i++) {
            if( schedule[i].isVoid && schedule[i+1].isVoid ) {
                pos = i;
                break;
            }
        }   

        if(pos == -1) {
            break;
        }

        schedule[pos].size += schedule[pos+1].size;
        schedule[pos].colour = colour_options[rand()%colour_options.size()];
        voidsJoineds++;
        schedule.erase(schedule.begin()+i+1);

    }

    return voidsJoineds;
}

//Reordena la cola de procesos por el tiempo de llegada y despues por el tamaño del nombre
void scheduleSort(vector<Tproces> &schedule) {

    unsigned int i;
    bool swap;

    //Ordenacion de la cola de procesos por el tiempo de llegada
    swap = true;
    while(swap) {

        swap = false;
        for(i = 0; (i+1) < schedule.size(); i++) {

            if(schedule[i].arrival > schedule[i+1].arrival) {
                swapSlots(i, i+1, schedule);
                swap = true;
                break;
            }
        }
    }

    //Ordenacion de la cola por el tammaño del nombre
    swap = true;
    while(swap) {

        swap = false;
        for(i = 0; (i+1) < schedule.size(); i++) {

            if(schedule[i].arrival == schedule[i+1].arrival) {

                if(schedule[i].name.length() == schedule[i+1].name.length()) {
            
                    if(schedule[i].name.compare(schedule[i+1].name) > 0) {

                        swapSlots(i, i+1, schedule);
                        swap = true;
                        break;

                    }

                }

                else if(schedule[i].name.length() > schedule[i+1].name.length()) {

                    swapSlots(i, i+1, schedule);
                    swap = true;
                    break;

                }             
            }
        }
    }

}

//Muestra un menú simple por pantalla donde te ofrece a elegir el tipo de algoritmo
char menu() {

    char opc;
    cout << endl;
    do{
        
        cout << "*********************************************" << endl;
        cout << "Bienvenido al simulador de Gestion de memoria" << endl;
        cout << "Esta simulacion dispone de dos algoritmos implementados." << endl << endl;
        cout << "   A) Mejor hueco" << endl;
        cout << "   B) Peor hueco" <<  endl << endl;
        cout << "   q) Salir del programa" << endl << endl;
        cout << "Que algoritmo desea emplear?: ";
        cin >> opc;

        if( (opc == 'A') || (opc == 'B') || (opc == 'q') ) {
            break;
        }

        else {
            cout << endl << endl;
            cout << "*********************************************" << endl;
            cout << "Opcion no aceptada (" << opc << "), por favor introduzca una opcion valida." << endl;
            cout << "*********************************************" << endl;
        }

    }while(1);

    return opc;
}

//Inicializa nuestra memoria con un hueco que le ocupa todo el tamaño
void startMemory(vector<Tproces> &memory) {
    
    Tproces wholevoid;
    wholevoid.size = KmemorySize;
    wholevoid.name = "Hueco";
    wholevoid.isVoid = true;
    wholevoid.colour = colour_options[rand()%colour_options.size()];
    
    memory.clear();
    memory.insert(memory.begin(), wholevoid);
}

void printTprocLine(vector<Tproces> &mem, HANDLE &hConsole) {

    int memdir = 0;
    int colour;
    cout << procLine << ": ";

    for(unsigned int i = 0; i < mem.size(); i++) {
        SetConsoleTextAttribute(hConsole, mem[i].colour);
        cout << "[" << memdir << " " << mem[i].name << " " << mem[i].size << "]";
        memdir += mem[i].size;
    }

    procLine++;
    SetConsoleTextAttribute(hConsole, KprintColour);

}

void voidsNr(vector<Tproces> memory, vector<int> &voids) {

    voids.clear();

    for(unsigned int i = 0; i < memory.size(); i++) {
        if(memory[i].isVoid) {
            voids.push_back(i);
        }
    }

}

void startManagement(vector<Tproces> scheduleList, char algo, HANDLE &hConsole) {

    vector<Tproces> memory;
    vector<Tproces> schedule;

    startMemory(memory);
    vector<int> voids;    //voids.size() será el numero de huecos existentes, y cada hueco tendrá asignado el valor int que será su posicion en la memoria
    unsigned int i, j, voidSelect = 0;
    int passFilter;
    bool match;

    ofstream salida;
    salida.open("salida.txt", ios::ate);
    

    arrivalPass(scheduleList, schedule);
    cout << endl;
    scheduleSave(memory, salida);
    printTprocLine(memory, hConsole);
    cout << endl;    

    while( ((memory.size() == 1) && (!memory[0].isVoid)) || (schedule.size() != 0) || (scheduleList.size() != 0) || (memory.size() != 1)  ) {
        //Averiguamos cuantos huecos hay en la memoria y su posicion
        voidsNr(memory, voids);
        match = false;

        if(algo == 'B') {
            passFilter = KmemorySize*2;
        }

        else if(algo == 'W') {
            passFilter = 0;
        }

        //Buscamos la pareja hueco-proceso 
        for(i = 0; i < schedule.size(); i++) {
            for(j = 0; j < voids.size(); j++) {
                if( schedule[i].size <= memory[voids[j]].size  ) {

                    if(algo == 'B') {   //Mejor hueco

                        if(memory[voids[j]].size < passFilter) {
                            passFilter = memory[voids[j]].size;
                            match = true;
                            voidSelect = voids[j];
                        }
                    }

                    if(algo == 'W') {   //Peor hueco

                        if(memory[voids[j]].size > passFilter) {
                            passFilter = memory[voids[j]].size;
                            match = true;
                            voidSelect = voids[j];
                        }
                    }
                }
            }

            if(match) { //Si conseguimos encontrar pareja hueco-proceso salimos de este bucle para poder tratarla e introducirla a memoria
                break;
            }
        }

        if(match) {

            if(schedule[i].size == memory[voidSelect].size) {     //Si el hueco es igual al tamaño del proceso, se sobreescribe el proceso en el hueco
                copyT(memory[voidSelect], schedule[i]);
                schedule.erase(schedule.begin()+i);
            }

            else {                                              //Si el hueco es mas grande que el proceso, el hueco se hace mas pequeño y se introduce el proceso

                memory[voidSelect].size -= schedule[i].size;            
                //Meto el proceso en memoria
                memory.insert(memory.begin()+voidSelect, schedule[i]);
                //Borro el proceso de la cola
                schedule.erase(schedule.begin()+i);

            }

        }

        else{

            scheduleSave(memory, salida);
            printTprocLine(memory, hConsole);
            cout << endl;

            decrement(memory);
            joinVoids(memory);
            decrementArrival(scheduleList);
            arrivalPass(scheduleList, schedule);    
        }

    }

    scheduleSave(memory, salida);
    printTprocLine(memory, hConsole);
    cout << endl;
    salida.close();

}

int main(int argc, char *argv[]) {
    
    //Comprobacion NºArgumentos
    if(argc != 2) {
        cout << "El formato de entrada es ./gestormemoria.exe 'ficheroEntrada.txt' " << endl;
        return 0;
    }

    string fileName = argv[1];
    vector<Tproces> schedule;

    srand(time(NULL));
    HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, KprintColour);

    //Lectura del fichero de entrada y almacenamos cada línea en una entrada en nuestro vector cola de procesos
    //Si el archivo no se puede abrir, el módulo devolverá verdadero y el programa acabará aqui despues de monstrar un mensaje indicativo por pantalla;
    if(scheduleStart(fileName, schedule)) {
        return 0;
    }
    scheduleSort(schedule);

    switch(menu()) {

        case 'A':
            startManagement(schedule, 'B', hConsole);    //Algoritmo mejor hueco
            break;

        case 'B':
            startManagement(schedule, 'W', hConsole);//Algoritmo peor hueco
            break;

        case 'q': 
            //printEnd();
            break;
        

        default:

            cout << "Error en ejecucion del menu. " << endl;
            return 0;

    } 
    
    
    return 0;
}