#include <iostream>
using namespace std;


//MÓDULOS

void fah_cel(float &celsius){
	celsius = (celsius-32)/1.8;
}


void cel_fah(float &fahren){
	fahren = fahren*1.8+32;
}



int main() {
	
		float temp = 0;
		bool elemento = true;
		int menu = 0;



		do {

			cout << " Elija cual tipo de conversión desea realizar" << endl << "1. Conversión de Celsius a Fahrenheit" << endl << "2. Conversión de Fahrenheit a Celsius" << endl << "3. Apagar el Programa" << endl << "4. Puta" << endl;

			cin >> menu;

			switch(menu) {

				

				case 1: cout << endl  << "Introduzca la temperatura en Celsius: " << endl;
						cin >> temp;

						cel_fah(temp);

							if(temp != -40) {
								
								cout << temp << endl;


								elemento = false;
							}

							else{

								cout << "¿Sabías que curiosamente -40 grados es igual en Celsius como en Fahrenheit?" << endl << endl;

								elemento = false;
											
							}
											break;


				case 2: cout << endl  << "Introduzca la temperatura en Fahrenheit: " << endl;
						cin >> temp;

						fah_cel(temp);

							if(temp != -40) {
								
								cout << temp << endl;


								elemento = false;
							}

							else{

								cout << "¿Sabías que curiosamente -40 grados es igual en Celsius como en Fahrenheit?" << endl << endl;

								elemento = false;
							}			
											break;

				case 3: cout << endl << "Apagando el sistema" << endl << endl;

						elemento = true;
											break;


				case 4: cout << "Para puta tu, SAMANTHA DE MIERDA" << endl << endl;

											break;


				default: cout << endl << "Ha introducido un carácter incorrecto" << endl << endl;
						elemento = false;			 
			}

		
		}


		while(elemento == false);






	return 0;
}