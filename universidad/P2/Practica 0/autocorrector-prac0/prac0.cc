 // DNI 74393989Y Martínez Cedillo, Alejandro

#include <iostream>
using namespace std;

//MÓDULO MULTIPLOS--------------------------------------------------------------------------

    bool multiple (int a, int b){

        if(a == b){                         //Condicional para comprobar si ambos números son el mismo 

            return (true);
        }

        else if (a%b == 0 || b%a == 0){     //Condicional para comprobar si la division entre ellos en ambas combinaciones el resto da 0
                                              
            return (true);
        }

        else{                               //Si ninguno de los anteriores casos no se da, no son multiplos

            return (false);
        }

    }

//--------------------------------------------------------------------------------------------



//MÓDULO 'N'----------------------------------------------------------------------------------

    int printN (int n){

        int cont = 0;
        
        if(n < 4){                                              //Condicional para comprobar que el número sea menor a 4 para dar Error

            cout << endl << "ERROR" << endl << endl;
            
            return 0;

        }

        cout << endl;

        for(int j = 0; j < n; j++){                             //Bucle para recorrer la "matriz imaginaria" siendo 'j' filas e 'i' columnas

            for(int i = 0; i < n; i++){

                if((i == 0) || (i == (n-1)) || (i == j)){       //Para crear la N simplemente rellenamos la primera columna y la última (0 y n-1)
                                                                //Para crear la diagonal igualamos i con j
        
                    cout << "*";                                //En ambos casos anteriores va a poner un asterisco
                    cont++;                                     //Cada vez que introduzca un asterisco se suma 1 al contador
                }

                else{                                           //En caso contrario al no ser esas coordenadas introduce un espacio

                    cout << " ";

                }
            }

            cout << endl;
        }

        cout << endl;

        return (cont);                                          // Al final del todo hace un return de la cantidad de asteriscos puestos

    }  

//--------------------------------------------------------------------------------------------



//MÓDULO AUXILIAR PRIMOS----------------------------------------------------------------------

    bool isPrime(int p){

        if(p == 2){                                 //Sabiendo que el 2 es el único primo par ponemos que si lo es, devuelva true

            return (true);
        }
        
        
        else if(p <= 1 || p%2 == 0){                //A partir de aquí comprobamos que sea mayor a 1 y no sea par
        
            return (false);                         //En ese caso devolverá false   
        }

        
        else {                                      //Tras pasar los filtros se dispone a comprobar si es primo o no
            
            for(int i = 3; i <= p/2 +1; i++){       //i empieza siendo 3 ya que el 0, 1, 2 no van a aparecer

                if(p%i == 0){                       //Se comprueba si nuestro número P partido i da 0 de resto

                    return (false);                 //En caso de darlo sumará devolverá false

                }

            }

            return (true);                          //En caso contrario al acabar el bucle devuelve true al no haber encontrado divisores
        
        }
    }

//-------------------------------------------------------------------------------------------

//MÓDULO PRIMOS-------------------------------------------------------------------------------

    int firstPrimes (int n){

        int num = 2;                                                    //El entero num empieza desde 2 ya que el 0 y el 1 no lo van a ser
        int salida = 0;
        int suma = 0;

        cout << endl;

        do{

            if(isPrime(num)){                                           //En el caso de cumplirse que num es primo se ejecutara lo de abajo

                cout << "El número " << num << " es primo" << endl;      
                suma = suma + num;                                      //Basicamente se suma el número para almacenar el total
                salida++;                                               //Y se suma 1 a salida 
            }

            num++;                                                      //Con esto consigo pasar al número siguiente, fuese o no fuese primo el anterior

        }while(salida != n);                                            //Cuando el numero de primos encontrados sea igual a n se sale del bucle


        return suma;                                                    //Devuelve el total

        }

//--------------------------------------------------------------------------------------------



//MÓDULO GOLDBACH ----------------------------------------------------------------------------

    void Goldbach(int n,int &p1,int &p2){

        for(int i = n/2; i < n; i++){

            if(isPrime(i)){

                for(int j = 0; j < n; j++){

                    if(isPrime(j)){

                       if(i+j == n){

                            p1 = j;
                            p2 = i;

                       }    

                    }

                }

            }
        
        }

    }

//--------------------------------------------------------------------------------------------