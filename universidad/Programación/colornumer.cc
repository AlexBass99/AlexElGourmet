#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;


void random(int &a, int &b, int &c) {
	
	do {
		
		srand(time(NULL));

			a = rand()%10;
			b = rand()%10;
			c = rand()%10;
	}

	while(a != b && a != c && b != c);

}


int main() {
	
int n1, n2, n3, a, b, c;

	random(a, b, c);

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	cin >> n1 >> n2 >> n3;

	if (n1 == a) {

		cout << "VERDE";

	}


	else if (n1 == b || n1 == c) {

		cout << "AMARILLO";

	}

	else {

		cout << "ROJO";
	}





}	





	return 0;
}