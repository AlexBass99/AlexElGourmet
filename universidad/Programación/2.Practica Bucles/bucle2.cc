#include <iostream>
using namespace std;

int main() {
	
	char letra;
	
	do {
	
		cout << "Introduce un carácter, use las letras 'g' 'p' 'm' : " << endl;
			cin >> letra;
			
	
	}while ((letra != 'g') && (letra != 'p') && (letra != 'm'));

	cout << "CERRANDO SISTEMA" << endl;



	return 0;

}