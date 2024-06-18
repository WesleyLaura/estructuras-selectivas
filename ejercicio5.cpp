#include <iostream>
using namespace std;

int main() {
    int edad;
    char sexo;
    float numPulsaciones;

    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << "Ingrese su sexo (M para masculino, F para femenino): ";
    cin >> sexo;

    sexo = toupper(sexo);

    if (sexo == 'F') {
        numPulsaciones = (220 - edad) / 10.0;
    } else if (sexo == 'M') {
        numPulsaciones = (210 - edad) / 10.0;
    } else {
        cout << "Sexo no valido. Por favor, ingrese M o F." << endl;
        return 1; 
    }

    cout << "El numero de pulsaciones por cada 10 segundos de ejercicio aerobico es: " << numPulsaciones << endl;

    return 0;
}
