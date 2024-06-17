#include <iostream>
using namespace std;

int main() {
	float compratotal;
	float numerodecamisas;
	float pagofinal;
	cout<<"Escriba la cantidad de camisas que ha comprado: ";
	cin >>numerodecamisas;
	cout<<"Escriba el costo final: ";
	cin>>compratotal;
	if (numerodecamisas>=3) {
		pagofinal = compratotal*0.80;
		cout<<"Su costo final a pagar sera: ";
	} else {
		pagofinal = compratotal*0.90;
		cout<<"Su costo final a pagar sera: ";
	}
	cout << pagofinal << endl;
	return 0;
}

