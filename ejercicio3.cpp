#include <iostream>
using namespace std;
float c(float a, float b){
	if (a>=3){
		return b*0.80;
	}else{
		return b*0.90;
	}
	
}
int main() {
	float compratotal;
	float numerodecamisas;
	float pagofinal;
	cout<<"Escriba la cantidad de camisas que ha comprado: ";
	cin >>numerodecamisas;
	cout<<"Escriba el costo final: ";
	cin>>compratotal;
	pagofinal=c( numerodecamisas, compratotal);
	cout<<"LA CANTIDAD FINAL A PAGAR ES: " <<pagofinal<< endl;
	
	return 0;
}

