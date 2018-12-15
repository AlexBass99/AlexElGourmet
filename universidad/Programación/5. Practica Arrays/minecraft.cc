#include <iostream>
#include <cctype>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
using namespace std;

//system("cls"); ESTO ES PARA HACER CLEAR DE LA PANTALLA



//MODULO DE LA JUGABILIDAD----------------------------------------------------------------------------------------------
	
	//void jugada()


//------------------------------------------------------------------------------------------------------------------------

//MODULO DE CONFIGURAR LA PARTIDA, PREPARARLA E INICIARLA--------------------------------------------------------------------------
	
	void config (){
		
		int x, y;
		
		cout << "¿Como de larga quieres que sea la mazmorra?" << endl;
		cin >> x;
		cout << endl << "¿Como de ancha quieres que sea?" << endl;
		cin >> y;
		cout << endl;

		
		//POSICIONAR LOS ELEMENTOS DE LA PARTIDA-----------------------------------------------------------------------	

			char maze[x] [y];

				int i;
				int j;
				
			//BUCLES PARA DETERMINAR LA POSICION DEL JUGADOR, LAS SALAS VACIAS, LOS MONSTRUOS Y LOS TESOROS------------------------
				
				for(i = 0; i < x; i++){							

					for(j = 0; j < y; j++){

						

						if(i == 0 && j == 0){					//Posicionamos al Jugador en las coordenadas (0,0)

							maze[i] [j] = 'J';				
						}


						else{

							//Leyenda ----> 0, 1, 2, 3, 4 = Sala Vacia (.) | 5 = Monstruo (M) | 6 = Tesoro (T) | Jugador (J) | Salida (S) | 

							int selector = rand() % 7;      						//Determina que tipo de elemento va a ser creando un número entre 0 y 6

							
							if(selector == 0 || selector == 1 || selector == 2 || selector == 3 || selector == 4){	//Convierte la coordenada en una sala vacia

								maze[i] [j] = '.';

							}

							else if(selector == 5){									//Convierte la coordenada en un monstruo

								maze [i] [j] = 'M';
							}

							else{													//Convierte la coordenada en un tesoro

								maze [i] [j] = 'T';
							}
						}						
					}
				}

			//-----------------------------------------------------------------------------------------------------


			//DETERMINAR COORDENADAS DE LA SALIDA------------------------------------------------------------------

				int salx;
				int saly;

				do{
					
					salx = rand() % x;				//Determina cual coordenada X va a ser creando un número entre 0 y X-1
					saly = rand() % y;				//Determina cual coordenada Y va a ser creando un número entre 0 e Y-1
				
				}while(( salx != 0) && (saly != 0));	//Así conseguimos que nunca pueda ser el (0,0)

								
				maze [salx] [saly] = 'S';


			//-------------------------------------------------------------------------------------------------------------------




		//-----------------------------------------------------------------------------------------------------------

		
		
		//SELECCIONAR SI SE QUIERE VER EL MAPA O NO------------------------------------------------------------------

			char op;

			cout << "¿Desea comprarle al extraño y siniestro anciano un mapa de la mazmorra? (s/n)" << endl;
			cin >> op;

			
			if(toupper(op) == 'S'){


				cout << "¿QUE PASA HUMANO? ¿TIENES MIEDO A LO DESCONOCIDO?" << endl; 
				cout << "(Mientras ignoras a la voz tenebrosa le compras al anciano el mapa)" << endl << endl;


				//COUT DE LOS BORDES DE LA MAZMORRA-----------------------------------------------------------------------------------------
									

					for(i = 0; i <= 2*y; i++){

						cout << "#";
					}

					

					cout << endl;

					

					for(i = 0; i < x; i++){

						cout << "|";

							for(j = 0; j < y; j++){

								cout << maze[i] [j] << "|";

							}

						cout << endl;

					}


					

					for(i = 0; i <= 2*y; i++){

						cout << "#";
					}


					cout << endl << endl;

				//-----------------------------------------------------------------------------------------------------------
				

			}

			
			else if(toupper(op) == 'N'){

				cout << "VEO QUE TE CREES VALIENTE, HUMANO, ESO ES, CAE EN LA DESESPERACION SIN FORMA DE ORIENTARTE" << endl << endl;
			}


			else {

				cout << "Tanto el anciano misterioso como la presencia con voz tenebrosa observan como das un giro de 180º, " << endl;
				cout << "pegas un par de patadas al aire, te sale espuma por la boca y mueres, eso es lo que le pasa a la gente";
				cout << " que se equivoca de tecla." << endl << endl;

				cout << "Por si no te diste cuenta esto es un GAME OVER, pringao" << endl;
			}


		//-----------------------------------------------------------------------------------------------------------


		
		
	}

//-----------------------------------------------------------------------------------------------------------




//MODULO DEL MENU DEL JUEGO--------------------------------------------------------------------------------------------

	void menu (){

		int menu;

		
		cout << endl << "ELIGE TU DESTINO" << endl;
		cout << "1. ENTRAR A MAZMORRIA" << endl;
		cout << "2. HUIR A CASA" << endl;

		cin >> menu;


		switch(menu){

			case 1: 
					cout << endl << "LAS PUERTAS AL HORROR Y LA SUPERVIVENCIA SE HAN ABIERTO" << endl;

					config();

						break;

			case 2: 
					cout << endl << "ESO, HUYE A TU HOGAR, HUYE A LOS BRAZOS DE TU MADRE, NOS DA IGUAL, ACABAREMOS ALCANZANDOTE" << endl << endl;

						break;
		}


	}

//-------------------------------------------------------------------------------------------------------




int main(){
	
	srand (time(NULL));
	
	cout << endl << "BIENVENIDO A LA MAZMORRA, DONDE LOS MAS VALIENTES VIENEN A PROBAR SU ESPIRITU" << endl;
	cout << endl << "¿QUE HARAS? ¿HUIRAS? ¿PEREZERAS EN UNA OSCURA SALA? ¿O SALDRAS VICTORIOSO?" << endl;

	menu();

	return 0;
}