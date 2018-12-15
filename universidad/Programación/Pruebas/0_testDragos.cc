#include <iostream>
using namespace std;

int main() {
	

	int aux1, aux2;


	cout << "Introduce un número: ";
	cin >> aux1;

	cout << "Introduce un número mayor: ";
	cin >> aux2; 


	if(aux1 < aux2) {

		cout << "¡Buen trabajo!" << endl;
	}

	else {

		cout << "No sabes contar hulio" << endl;
	}




	return 0;
}