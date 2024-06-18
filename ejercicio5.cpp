#include <iostream>
#include <windows.h>
using namespace std;

int main() { 
    int edad;
    char sexo;
    float numPulsaciones;
	SetConsoleOutputCP(CP_UTF8);
    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << "Ingrese su sexo (M para masculino, F para femenino): ";
    cin >> sexo;

    if (sexo == 'F') {
        numPulsaciones = (220 - edad) / 10;
    } else if (sexo == 'M') {
        numPulsaciones = (210 - edad) / 10;
    } else {
        cout << "Sexo no válido " << endl;
        return 0; 
    }

    cout << "El número de pulsaciones por cada 10 segundos de ejercicio aeróbico es: " << numPulsaciones << endl;

    return 0;
}
