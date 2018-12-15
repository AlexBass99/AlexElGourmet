#include <iostream>	
using namespace std;

int main() {

 	
 int alfa;

 	cout << "Inserte un número menor que 1 y mayor o igual que 100: " << endl;
 	cin >> alfa;

	 if (alfa < 1 || alfa >= 100) {
 	cout << "CORRECTO" << endl;
 	}

 	else {
 	cout << "Has fallado" << endl;
 	}


return 0;
}