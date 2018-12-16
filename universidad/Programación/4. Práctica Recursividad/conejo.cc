#include <iostream>
using namespace std;


//SI TE ACERCAS A 45 MESES EL PROGRAMA TARDARÁ O DIRECTAMENTE PETARÁ


//Módulo Crianza

int crianza(int months){

	
	int res = 0;

	for(int i = months; i > 0; i--){

		if(months > 2){

			res = crianza(months-1) + crianza(months-2);
		}

		else {

			res = 1;
		}
		
	
		return res;

	}


}



//Menú del Programa

void menu(int &salida){

	int op = 0;
	int meses = 0;
	int res = 0;


	cout << "--------------------------------------------------------------------------" << endl;
	cout << endl << "Elija la opción deseada" << endl;
	cout << endl << "1. Calcular crianza" << endl;
	cout << endl << "2. Salir" << endl;

	cin >> op;

	
	switch(op){

		case 1: cout << endl << "Introduzca el número de meses de crianza de los conejos" << endl;
				cin >> meses;

				res = crianza(meses);

				cout << endl << "El número de parejas de conejos después de " << meses << " mes/meses sería de " << res << " pareja/s de conejos sanos y fuertes" << endl;

					break;

		
		case 2: cout << endl << "Adiós, gracias por usar el servicio de Conejos-40FahrenheitCelsius SL" << endl;

				salida = 1;

					break;

		
		default: cout << endl << "Opción elegida no existente" << endl << endl;
	}
}







int main(){
	
	int exit = 0;


	do{

		menu(exit);

	}

	while(exit == 0);


	return 0;

}