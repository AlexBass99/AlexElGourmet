 #include <iostream>
 using namespace std;

 int main() {


	char alfa;
	
	cout << "Inserte uno de estos carácteres por favor: N/S ";
	cin >> alfa; 

	
	if (alfa == 's' || alfa == 'S') {
		cout << "AFIRMATIVO" << endl;
	}

	else if (alfa == 'n' || alfa == 'N') {
		cout << "NEGATIVO" << endl;
	}

	else {
	 	cout << "Carácter incorrecto" << endl;
	}




return 0;
}