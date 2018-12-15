#include <iostream>
using namespace std;

int main() {

	float a, b, c, d;

	cout << "Introduzca la altura de las personas a identificar de izquierda a derecha: " << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;

	if ((b - a) == (d - c) && ((a<b) && (b<c) && (c<d))) {
		cout << "Enhorabuena ha descubierto a los Dalton haciendo de las suyas!!" << endl;
	}

	else {
		cout << "Lo sentimos mucho no sabemos quienes son esas personas" << endl;
	}
	



return 0;
}