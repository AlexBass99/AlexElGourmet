#include <iostream>
#include <cctype>
#include <string.h>
using namespace std;



//MODULO INTRODUCIR FRASE AL STRING RAE-----------------------------------------------------------------------------------------------------------------------

void frase(char rae[]) {
	
	 

	cout << endl << "Introduzca una frase para deteriorarla: " << endl;

	cin.getline(rae,100);
		
}	

//-----------------------------------------------------------------------------------------------------------------------------------------------------





//MODULO PONER h-----------------------------------------------------------------------------------------------------------------------------------

void h_final (char cani[], int k, int n){

	int t;
	int fin = 1 + strlen(cani);
	cani[fin+1] = '\0';

	for(t = fin; t >= k+1 ; t--){

		
		cani[t+1] = cani[t];

	}

	cani[t+1] = 'h';

	if(cani[t+2] == '\0'){
	
		cani[t+2] = '.';
	}

	else{

		cani[t+2] = ' ';
	}
}

//-----------------------------------------------------------------------------------------------------------------------------------------------------





//MODULO TRADUCCION------------------------------------------------------------------------------------------------------------------------------------

void canificator(char rae[], char cani[], int n) {

	int i,j,k,s; //CONTADORES PARA LOS FOR DE CADA CARACTERISTICA
	int cont;
	cont = strlen(rae);	
	strcpy(cani, rae);
	



	//--------------------------------------------------------INTERCAMBIAR 'c' POR 'k'

	for(i = 0; i <= cont; i++){

		if(cani[i] == 'c'){

		
			cani[i] = 'k'; 

		}
	}


	//---------------------------------------------------------INTERCAMBIAR MAYUSCULAS Y MINUSCULAS

	for(j = 0; j <= cont; j++){

		if(j % 2 == 0){

			cani[j] = toupper(cani[j]);
		}
	}


	//------------------------------------------------------PONER LAS 'h' Y DEJAR UN ESPACIO LUEGO

	for(k = 0; k <= cont; k++){
		
		if((toupper(cani[k]) == 'A' || toupper(cani[k]) == 'E' || toupper(cani[k]) == 'I' || toupper(cani[k]) == 'O' || toupper(cani[k]) == 'U') && (cani[k+1] == ' '  || cani[k+1] == '\0')){
			
			h_final(cani, k, n);
	
		}
	}


	cout << cani << endl << endl;
	

}

//-----------------------------------------------------------------------------------------------------------------------------------------------------

	



int main(){
	
	int n = 100;
	char rae[n];
	char cani[n];

	frase(rae);
	canificator(rae, cani, n);


	return 0;
}