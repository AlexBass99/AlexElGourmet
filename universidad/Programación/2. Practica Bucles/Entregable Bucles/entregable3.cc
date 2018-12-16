#include <iostream>		
using namespace std;

//Alejandro Martínez Cedillo 74393989-Y

int main() {

	int horos = 0;
	int year;
	bool salida = true;
	bool salida2 = true;

	do {
	
		cout << "Bienvenido a EL HORÓSCOPO ONLINE, introduzca su año de nacimiento y sabrá si es FUEGO o AGUA" << endl;
		
		cin >> year;

		if ( year < 1) {

			cout << "Año incorrecto" << endl;

		}

		else  {
			cout << "Año correcto, se va a proceder a analizarlo" << endl;
			salida = false;
        }
	
	
	}while (salida);



	while (salida2) {

		horos = horos + year%10;


		if (year > 9) {


			year = year/10;
			

		}

		else {

			salida2 = false;
		} 



	}


	if (horos%2 == 0) {

		cout << "Su año es uno ardiente como el FUEGO" << endl;
	}



	else {

		cout << "Su año es sereno y tranquilo como el AGUA" << endl;
	}
		


		

	return 0;

}