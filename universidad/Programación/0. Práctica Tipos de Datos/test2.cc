#include <iostream>
#include <math.h>
using namespace std;

//Constantes//
const float PI = 3.1416;
//FIN de Constantes//

int main() {

//Variables//
	float radio;
	float altura;
	float precio_peq;
	float precio_med;
	float precio_gra;
	float vol_peq ;
	float vol_med; 
	float vol_gra;
//FIN de Variables//	

 	cout << "Introduzca el radio y la altura del bote pequeño en este mismo orden: " << endl;
 		cin >> radio;
 		cin >> altura;

 	vol_peq = ((radio*PI)*(radio*PI))*altura;
	vol_med = vol_peq*1.25;
	vol_gra = vol_peq*1.5;
 	
 	cout << "Introduzca el precio de las latas en el orden anteriormente mencionado: " << endl;
 		cin >> precio_peq;	
 		cin >> precio_med;
 		cin >> precio_gra;	

 	cout << "El precio por cm³ en las latas es: " << endl;
 	cout << "Pequeño --> " << precio_peq/vol_peq << endl;




return 0;
}