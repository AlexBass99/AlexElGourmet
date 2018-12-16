#include <iostream>
using namespace std;

//REGISTROS---------------------------------------------------------------------------------------------------

    typedef struct{

        char nombre[20];
        float precio;
    
    }TProductos;

//------------------------------------------------------------------------------------------------------------


//MODULO DE ALTA DE PRODUCTOS--------------------------------------------------------------------------------

    void alta(TProductos productos[], int &cont){

        cout << "Introduzca un nombre para el producto" << endl;
        cin.getline(productos[cont].nombre);
        
        cout << "Introduzca un precio para el producto" << endl;
        cin >> productos[cont].precio;

        cont++;
    }

//-------------------------------------------------------------------------------------------------------------



int main() {

    int op;
    int cont = 0;
    bool exit = false;

    TProductos productos[50];

    do {

        cout << endl << "1. Alta de Productos" << endl << "2. Baja de Productos" << endl << "3. Modificar Productos";
        cout << endl << "4. Consulta" << endl << "5. Cerrar Programa" << endl; 
        cin >> op;
        cout << "El valor de CONT es " << cont << endl;

        switch(op) {

            case 1: 
                    cout << endl << "Entrando a Alta de Productos" << endl;
                    alta(productos, cont);    

                                break;
            case 2:
                    cout << endl << "Entrando a Baja de Productos" << endl;

                                break;
            case 3: 
                    cout << endl << "Entrando a Modificar Productos" << endl;

                                break;
            case 4: 
                    cout << endl << "Entrando a Consulta" << endl;

                                break;
            case 5: 
                    cout << endl << "Cerrando el programa" << endl;

                    exit = true;             
                            
                                break;

            default: 
                    cout << endl << "La tecla introducida es incorrecta" << endl << endl << endl << endl;
         
        }
   
    } while(exit == false);


    return 0;
}