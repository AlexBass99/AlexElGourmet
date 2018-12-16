#include <iostream>
using namespace std;

int main() {
	
	int sumanum = 0;
	int numbers = 0;
	int total = 0;
	
	do {
	
		cout << "Introduce un número, para terminar pulse 0: " << endl;
			cin >> numbers;
			
		if (numbers !=0) {

			total = total + 1;
			sumanum = sumanum + numbers;

			cout << "El total de números introducidos es: " << total << endl << "La suma de dichos números es: " << sumanum << endl;
		}

	}while (numbers != 0);





	return 0;

}