#include <iostream>
#include <cctype>
#include <string.h>
using namespace std;






//MODULO DE CONFIGURAR LA PARTIDA Y PREPARARLA--------------------------------------------------------------------------
	void config (){
		int x, y;
		
		cout << "¿Cómo de larga quieres que sea la mazmorra?" << endl;
		cin >> x;
		cout << endl << "¿Cómo de ancha quieres que sea?" << endl;
		cin >> y;
		cout << endl;


		char maze[x] [y];

			int i = 0;
			int j = 0;

		
		//INICIALIZAR CON PUNTOS LA MAZMORRA------------------------------------------------------------------

			for(i = 0; i < x; i++){

				for(j = 0; j < y; j++){

				maze[i] [j] = '.';

				}


			}

		//-----------------------------------------------------------------------------------------------------------

		//SELECCIONAR SI SE QUIERE VER EL MAPA O NO------------------------------------------------------------------

			char op;

			cout << "¿Desea comprarle al extraño y siniestro anciano un mapa de MAZMORRIA? (s/n)" << endl;
			cin >> op;

			
			if(op == 's'){


				cout << "¿QUÉ PASA HUMANO? ¿TIENES MIEDO A LO DESCONOCIDO?" << endl; 
				cout << "(Mientras ignoras a la voz tenebrosa le compras al anciano el mapa)" << endl << endl;


				//COUT DE LA MAZMORRA-----------------------------------------------------------------------------------------
								

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

			
			else if(op == 'n'){

				cout << "VEO QUE TE CREES VALIENTE, HUMANO, ESO ES, CAE EN LA DESESPERACIÓN SIN FORMA DE ORIENTARTE" << endl << endl;
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
	
	cout << endl << "BIENVENIDO A MAZMORRIA, DONDE LOS MÁS VALIENTES VIENEN A PROBAR SU ESPIRITU" << endl;
	cout << endl << "¿QUÉ HARÁS? ¿HUIRÁS? ¿PEREZERÁS EN UNA OSCURA SALA? ¿O SALDRÁS VICTORIOSO?" << endl;

	menu();

	return 0;
}