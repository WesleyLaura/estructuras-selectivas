#include <iostream>
#include <windows.h>

using namespace std;

int main() {
	SetConsoleOutputCP(CP_UTF8);
    int numero1, numero2, numero3;
    cout << "Ingrese el numero a vereficar si es múltilplo de los dos siguientes numeros a ingresar (x°): ";
    cin >> numero1;
    cout << "Ingrese el segundo numero (y): ";
    cin >> numero2;
    cout << "Ingrese el tercer numero (z): ";
    cin >> numero3;

    if (numero1 % numero2 == 0 && numero1 % numero3 == 0) {
        cout << "El numero " << numero1 << " es múltiplo de " << numero2 << " y " << numero3 << "." << endl;
    } else if (numero1 % numero2 != 0 && numero1 % numero3 == 0){
    	cout << "El numero " << numero1 << " no es múltiplo de " << numero2 << " y " << numero3 << " si es múltiplo de "<<numero1<<"." << endl; 
	} else if (numero1 % numero2 == 0 && numero1 % numero3 != 0){
		cout << "El numero " << numero1 << "  es múltiplo de " << numero2 << " y " << numero3 << "no es múltiplo de "<<numero1<<"." << endl; 
	}
	else {
        cout << "El numero " << numero1 << " no es multiplo de " << numero2 << " y " << numero3 << "." << endl;
    }

    return 0;
}
