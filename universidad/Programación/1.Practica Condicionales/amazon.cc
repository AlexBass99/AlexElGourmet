#include <iostream>
#include <math.h>
using namespace std;

int main() {
	
	int orig = 0;
	int dest = 0;
	int rest = 0;

	

	cout << "Introduzca despacho de origen: " << endl;
	cin >> orig;

	cout << "Introduzca despacho de destino: " << endl;
	cin >> dest;

	
	

	if (dest == orig) {
		cout << "Estás enviando el paquete al mismo despacho" << endl;
	}



	else if (dest-orig < 0){

		if(fabs(dest-orig) > 30) {

			rest = 60-(fabs(orig-dest));
	
			cout << "Ha de avanzar " << rest << " despachos de forma decreciente" << endl << endl;
		}

		else if (fabs(dest-orig) <= 30) {

			rest = fabs(dest-orig);

			cout << "Ha de avanzar " << rest << " despachos de forma decreciente" << endl << endl;
		}

		
	}

	else if (dest-orig > 0)  {

		if(fabs(dest-orig) > 30) {

			rest = 60-(fabs(orig-dest));
	
			cout << "Ha de avanzar " << rest << " despachos de forma creciente" << endl << endl;
		}

		else if (fabs(dest-orig) <= 30) {

			rest = fabs(dest-orig);

			cout << "Ha de avanzar " << rest << " despachos de forma creciente" << endl << endl;
		}

	}



	return 0;
}