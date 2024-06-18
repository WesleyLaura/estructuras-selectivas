#include <iostream>
using namespace std;
 float c( float x, float y){
 	if (x>=74){
 		return y*0.80;
	 } else {
	 	return y*0.85;
	 }
 }

int main() {
	float compratotal;
	float numero;
	float pagofinal;
	cout<<"INGRESE EL NUMERO ESCOGIDO: "; 
	cin>>numero;
	cout<<"INGRESE COMPRA TOTAL: "; 
	cin>>compratotal;
	cout<<"LA COMPRA FINAL A PAGAR ES : "<<c(numero,compratotal)<<endl;
	
	return 0;
}


