#include <iostream>
using namespace std;

int main() {

	double s_g;

	cout << "Bienvenido al servidor de Valkyrie, soy la base de datos creada para todos aquellos usuarios del Reading Steiner que busquen conocer información de las lineas estudiadas." 
	<< endl << "Para aprender de tu linea actual u otras de las cuales hayas escuchado introduce el número de divergencia deseado: " << endl;
	cin >> s_g;
	
	if (s_g == 1.048596) {
		cout << endl << "Linea Steins Gate, no le afecta los campos de atracción de Alpha o Beta, en ella el futuro es incierto por lo que su potencial es infinito."
		<< endl;	
	}
	
	else if (s_g < 1 && s_g >= 0) {
		cout << endl << "Linea Alpha, distopía causada por SERN por obtener el monopolio de máquinas del tiempo." << endl;
	}


	else if ((s_g >= 1.0) && (s_g != 1.048596) && (s_g < 2.0)) {
		cout << endl << "Linea Beta, Tercera Guerra Mundial causada por obtener la tecnología de máquinas del tiempo." << endl;
	}


	else if ((s_g < 3) && (s_g >= 2)) {
		cout << endl << "Linea Gamma, distopía causada por SERN por obtener el monopolio de máquinas del tiempo, el dictador de Japón es Okabe Rintarou." << endl;
	}


	else if ((s_g < 4) && (s_g >= 3)) {
		cout << endl << "Linea Delta, en su mayoría es desconocida pero se sabe que es sin distopía de SERN ni Tercera Guerra Mundial, en ella se crearon más Future Gadgets." << endl;
	}


	else {
		cout << endl << "Divergencia negativa o fuera del rango de los campos de de atracción hasta ahora estudiados, linea desconocida." << endl;
	}
 

return 0;
}