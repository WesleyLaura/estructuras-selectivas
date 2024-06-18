#include <iostream>
using namespace std;

int main() {
	float compratotal;
	float numeroescogido;
	float pagofinal;
	cout<<"Escriba el numero que ha escogido: ";
	cin >>numeroescogido;
	cout<<"Escriba su compra total: ";
	cin>>compratotal;
	if (numeroescogido>=74) {
		pagofinal = compratotal*0.80;
		cout<<"Su costo final a pagar sera: ";
	} else {
		pagofinal = compratotal*0.85;
		cout<<"Su costo final a pagar sera: ";
	}
	cout << pagofinal << endl;
	return 0;
}


