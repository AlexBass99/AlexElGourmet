#include <iostream>		
using namespace std;

//Alejandro Martínez Cedillo 74393989-Y

int main() {
	
	char letra;

	do { 

		cout << endl << "Introduzca una letra entre A y Z: " << endl;
		cin >> letra;
		
	}while (letra < 'A' || letra > 'Z');
	

	cout << "Letra válida" << endl;

	


	return 0;

}