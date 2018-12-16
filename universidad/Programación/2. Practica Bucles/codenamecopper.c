// Tabla multiplicar
#include <iostream>
using namespace std;
int main(){
    
    int z, n,  m;
    
    cout << "Introduce un número a mostrar su tabla de multiplicar." << endl;
    cin >> n;
    cout << endl << endl;
    
    cout << "Introduce un número de múltiplos." << endl;
    cin >> m;
    cout << endl << endl;
    
    
    z = 1;
    
    while (z<=m) {
        cout << n*z << endl;
        z = z+1;
    }
//  
//  for (z=1; z<=m; z++) {
//      cout << n*z << endl;
//  }
//  
    return 0;
}



// Escribe numero de 3 cifras al reves
#include <iostream>
using namespace std;

int main() {
    
    int c, d, n, aux, nr;
    
    c = 0;
    d = 0;
    
    cout << endl;
    cin >> nr;
    
    n = nr%10;
    aux = nr/10;
    d = a%10;
    c = a/10;

    cout << n << d << c << endl;
    
    return 0;
}



// Cuadrado de X*Y con un caracter z
//Dragos Tanase
#include <iostream>
using namespace std;

int main () {

    int x, y, n;
    char z;
    
    cout << "Introduce un rango. " << endl;
    cin >> n;
    cout << endl;
    
    cout << "Introduce un carácter. " << endl;
    cin >> z;
    cout << endl << endl;
    
    for (x=0; x<n; x++) {
        
        for (y=0; y<n; y++) {
            cout << z;
        }
        
        cout << endl;
    }

    cout << endl;

    return 0;
}

//Pintar triangulo de X lineas rectángulo elegiendo lado derecha o izquierda
//Dragos Tanase

#include <iostream>
using namespace std;

int main() {
    
    int x, y, dir, rg, intento;
    int aux1, aux2, aux3, aux4, aux5;
    char z, spc;
    
    aux2 = 1;
    aux3 = 0;
    intento = 0;
    
    spc = ' ';
    
    do{
        cout << endl;
        cout << "¿Cuantas lineas quieres que tenga tu triangulo? (1 - 50)" << endl;
        cout << endl;
        
        cin >> rg;
        cout << endl << endl;
        
        if ((rg < 1) || (rg > 50)) {
            cout << endl << endl << endl << "Error. Introduzca un numero positivo que se encuentre entre 1 y 50. " << endl;
            intento = intento + 1;
        }
        
    } while(((rg < 1) || (rg > 50)) && (intento < 5));
    
    if (intento >= 5)
        
        cout << endl << endl << "Ha excedido el número de intentos. Vuelva a empezar. " << endl << endl;
    
    else if (intento < 5) {
        
        intento = 0;

        cout << endl;
        cout << "¿Con qué carácter desea que se forme su triángulo? " << endl;
        cout << endl;
        
        cin >> z;
        cout << endl << endl;

        
        
        cout << "¿Donde desea que tenga el hueco su triángulo? " << endl;
        cout << "1. Arriba izquierda. " << endl;
        cout << "2. Arriba derecha. " << endl;
        cout << "3. Abajo izquierda. " << endl;
        cout << "4. Abajo derecha. " << endl;
        
        do {
            
            cout << endl << endl;
            cin >> dir;
            cout << endl << endl;
            
            if ((dir != 1) && (dir != 2) && (dir != 3) && (dir != 4)) {
                cout << "Error, introduzca un valor entero entre 1 y 4. " << endl << endl;
                intento = intento + 1;
            }

        } while(((dir != 1) && (dir != 2) && (dir != 3) && (dir != 4)) && (intento < 5));
        
        if (intento >= 5)
        
            cout << endl << endl << "Ha excedido el número de intentos. Vuelva a empezar. " << endl << endl;
        
        else if (intento < 5) {
            
            intento = 0;
            
            // Triángulo hueco arriba izquierda
            if (dir == 1) { 
                
                for (x = 0; x < rg; x++) {
                    
                    for (aux1 = 0; aux1 < (rg - aux2); aux1++) 
                        cout << spc;
                    
                    for (aux1 = 0; aux1 < aux2; aux1++)
                        cout << z;
       
                    aux2 = aux2 +1;
                    cout << endl;
                    
                }
                     
            }
            
            // Triángulo hueco arriba derecha
            else if (dir == 2) {
                
                for (x = 0; x < rg; x++) {
                    
                    for (aux1 = 0; aux1 < aux2; aux1++)
                        cout << z;
                    
                    for (aux1 = 0; aux1 < (rg - aux2); aux1++)
                        cout << spc;
                    
                    aux2 = aux2 +1;
                    cout << endl;
                    
                }
                
            }
            
            // Triángulo hueco abajo izquierda
            else if (dir == 3) {
                
                for (x = 0; x < rg; x++) {
                        

                    
                    for (aux1 = 0; aux1 < aux3; aux1++)
                        cout << spc;
                    
                    for (aux1 = 0; aux1 < (rg - aux3); aux1++)
                        cout << z;
                    
                    aux3 = aux3 + 1;
                    cout << endl;
                    
                }
                
                
                
            }
            
            // Triángulo hueco abajo derecha
            else if (dir == 4) {
               
                for (x = 0; x < rg; x++) {
                    
                    for (aux1 = 0; aux1 < (rg - aux3); aux1++)
                        cout << z;
                    
                    for (aux1 = 0; aux1 < aux3; aux1++)
                        cout << spc;
                    
                    aux3 = aux3 + 1;
                    cout << endl;
                    
                }
                
                
            }
            
        }
        
        cout << endl << endl;
        
    }
    
    return 0;
    
}



//Minijuego sumas
//Dragos Tanase
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    
    int salida, sumas, solve;
    int n1, n2, i, aux1, aux2, aux3;
    char aux4;
    
    srand(time(NULL));
    salida = 0;
    solve = 0;
    aux1 = 1;
    
    do {
        
        cout << "Con cuantas sumas desea jugar?" << endl;
        cin >> sumas;
        
        aux3 = sumas;
        
        for (i = 0; i < sumas; i++) {
            
            n1 = rand()%10;
            n2 = rand()%10;
            
            cout << endl << endl << endl;
            cout << "Pregunta número " << aux1 << "." << endl;
            cout << "¿Cuanto es " << n1 << " + " << n2 << "?" << endl;
            cin >> aux2;
            cout << endl;
            
            if (aux2 == (n1+n2)) {
                cout << "¡Acierto!";
                solve = solve + 1;
            }
            
            else
                cout << "Error. ";
            
            cout << endl << endl;
            aux1 = aux1 + 1;
        }
        
        cout << "Usted ha acertado " << solve << " preguntas de " << aux3 << ".";
        cout << endl;
        
        if ((solve*2) > aux3)
            cout << "Buen trabajo";
        
        cout << endl << endl;
        
        do {
            
            cout << "¿Desea repetir el juego?" << endl;
            cout << "--- s/n ---" << endl;
            cin >> aux4;
            cout << endl;
            
                if (aux4 == 's') {
                    cout << "Repetir el juego." << endl;
                    solve = 0;
                }
                
        
                else if (aux4 == 'n') {
                    cout << "No repetir el juego." << endl;
                    salida = 1;
                }
                
                else 
                    cout << "Error" << endl;
                
                cout << endl;
                
        }while ((aux4 != 's') && (aux4 != 'n'));
    
    }while (salida == 0);

    return 0;
}


//BlackJack

#include <iostream>
#include <stdlib.h>
using namespace std;


int reparteCarta() {

	int carta;


	carta = rand()%12+1;

	return carta;
};

int calculaTotal(int cartaN, int pAct) {

	int result;

	if(cartaN > 9)
		cartaN = 10;

	else if(cartaN == 1)
		cartaN = 11;

	result = pAct + cartaN;

	return result;
};

int comparaPuntos(int pJug, int pBanc) {

	int solve;

	if(pJug > pBanc)
		solve = 0;

	else if(pJug < pBanc)
		solve = 1;

	else
		solve = 2;

	return solve;
};

int main() {

	int salida1, salida2, salida3, salida4, salida5;
	int banca, aux1, aux2, aux3, aux4;

	char jugar, jugarA;

	srand(time(NULL));
	


	// Bucle principal salida
	do{

		// Comprobacion entrada principal s/n
		do{

			salida1 = 0;
			salida2 = 0;
			salida3 = 0;
			salida4 = 0;
			salida5 = 0;
			aux1 = 0;
			aux2 = 0;
			aux4 = 0;

			cout << endl << endl << endl;
			cout << "¿Desea jugar al BlackJack? (s/n) " << endl;

			cin >> jugarA;
			cout << endl;

		
				if(jugarA == 'n') {
				salida1 = 1;
				salida5 = 1;
				}

				else if((jugar != 'n') && (jugar != 's')) {
				cout << "ERROR";
				}

		}while((jugarA != 'n') && (jugarA != 's'));
		// Fin comprobacion entrada principal

		// Bucle jugar	
		while(salida2 != 1 && salida1 != 1) {

			// Reparte carta
			do{
				aux1 = reparteCarta();


				cout << "Te ha salido un " << aux1;
				cout << endl << endl;

				aux2 = calculaTotal(aux1, aux2);

				if(aux2 < 22){
					cout << "Por ahora tienes un " << aux2 << ".";
					cout << endl << endl;
					salida3 = 1;
					salida4 = 0;
				}

				else{
					cout << "Te has pasado." << endl;
					salida2 = 1;
					salida3 = 1;
					aux4 = 1;
					aux3 = 1;
				}

			}while(salida3 != 1);
			//Fin reparte carta


			//Carta adiconal
			while((salida4 != 1) && (salida1 != 1) && (aux4 != 1)) {
				cout << "¿Quieres carta? (s/n) ";
				cin >> jugar;
				cout << endl;

				if(jugar == 'n') {
					salida4 = 1;
					salida2 = 1;
				}

				else if(jugar == 's')
					salida4 = 1;
					salida3 = 0;

			}
			//Fin carta adicional

		}	
		//Fin bucle jugar

		//Comprobar ganador
		while(salida5 != 1) {

			banca = rand()%21+1;

			cout << endl;
			cout << "La banca tenia " << banca << endl;

			if(aux4 == 0)
				aux3 = comparaPuntos(aux2, banca);
			

			if(aux3 == 0)
				cout << "Has ganado!!";

			else if(aux3 == 1)
				cout << "Ha ganado la banca";

			else
				cout << "El jugado y la banca han empatado";

			cout << endl;
			salida5 = 1;
		}
		//Fin comprobar ganador

	}while(salida1 != 1);
	// Fin bucle principal

	cout << endl;
	cout << "Fin ";
	cout << endl << endl;

	return 0;
}
