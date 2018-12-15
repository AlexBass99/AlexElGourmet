#include <iostream>
using namespace std;

int main() {

	char menu;

	cout << "Elija alguno de estos colores: " << endl << "1.- ROJO" << endl 
		 << "2.- AZUL" << endl << "3.- VERDE"<< endl << "4.- AMARILLO" << endl;
	
	cin >> menu;

	switch (menu) {
		case '1': cout << "Ha elegido el color ROJO" << endl;
				break;	
		case '2': cout << "Ha elegido el color AZUL" << endl;
				break;	
		case '3': cout << "Ha elegido el color VERDE" << endl;
				break;	
		case '4': cout << "Ha elegido el color AMARILLO" << endl;
				break;
		default: cout << "ERROR, la opción elegida es incorrecta." << endl;	 	
	}



return 0;

}