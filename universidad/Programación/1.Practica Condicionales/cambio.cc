#include <iostream>
using namespace std;

int main() {

	float din_brut;
	cout << "Introduzca la cantidad de dinero a devolver: " << endl;
	cin >> din_brut;
	din_brut = din_brut * 100;
	int cents = din_brut;
	
	
	
	if (cents/2000 > 0) {
	cout << endl << "Se le devolverá la cantidad de " << cents/2000 << " billete(s) de 20€" << endl;
	cents = cents-2000*(cents/2000);
	
	}

	
	if (cents/1000 > 0) {
	cout << endl << "Se le devolverá la cantidad de " << cents/1000 << " billete(s) de 10€" << endl;
	cents = cents-1000*(cents/1000);
	
	}	

	
	if (cents/500 > 0) {
	cout << endl << "Se le devolverá la cantidad de " << cents/500 << " billete(s) de 5€" << endl;
	cents = cents-500*(cents/500);
	
	}		

	
	if (cents/100 > 0) {
	cout << "Se le devolverá la cantidad de " << cents/100 << " moneda(s) de 1€" << endl;
	cents = cents-100*(cents/100);
	
	}	

	
	if (cents/50 > 0) { 
	cout << "Se le devolverá la cantidad de " << cents/50 << " moneda(s) de 50cent" << endl;
	cents = cents-50*(cents/50);
	
	}	

	
	if (cents/20 > 0) { 
	cout << "Se le devolverá la cantidad de " << cents/20 << " moneda(s) de 20cent" << endl;
	cents = cents-20*(cents/20);

	}	

	
	if (cents/10 > 0) { 
	cout << "Se le devolverá la cantidad de " << cents/10 << " moneda(s) de 10cent" << endl;
	cents = cents-10*(cents/10);
		
	}	

	
	if (cents/5 > 0) { 
	cout << "Se le devolverá la cantidad de " << cents/5 << " moneda(s) de 5cent" << endl;
	cents = cents-5*(cents/5);
	
	}	

	
	if (cents/2 > 0) { 
	cout << "Se le devolverá la cantidad de " << cents/2 << " moneda(s) de 2cent" << endl;
	cents = cents-2*(cents/2);
	
	}	

	
	if (cents/1 > 0) { 
	cout << "Se le devolverá la cantidad de " << cents/1 << " moneda(s) de 1cent" << endl;
	cents = cents-1*(cents/1);
	
	}	
	

return 0;
}