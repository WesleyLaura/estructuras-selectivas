#include <iostream>
#include <windows.h>
using namespace std;
float c( char g, int e){
	float c;
	switch (g){
		case 'M':
			c=(210-e)/10;
			break;
		case 'F':
			c=(220-e)/10;
			break;
		default :
			c=1;		
			
	}
	return c;
}

int main() { 
    int edad;
    char sexo;
    float numPulsaciones;
	SetConsoleOutputCP(CP_UTF8);
    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << "Ingrese su sexo ('M' para masculino, 'F' para femenino): ";
    cin >> sexo;
    numPulsaciones=c(sexo, edad);
    if ( sexo== 'F' || sexo=='M'){
    	cout << "El número de pulsaciones por cada 10 segundos de ejercicio aeróbico es: " << numPulsaciones << endl;
	}else{
		cout<<"SEXO INVÁLIDO!!!";
	}
   return 0;
}
