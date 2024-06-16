#include<iostream>
using namespace std;

int main() {
	float comprarealizada;
	float pagofinal;
	cout<<"Ingrese la cantidad de la compra realizada: ";
	cin >> comprarealizada;
	if (comprarealizada>=0){
		if (comprarealizada>1000) {
		pagofinal = comprarealizada*0.80;
		cout<<"Su pago final es de: " << pagofinal << endl;
	
	}else{
		cout<<"Su compra no alcanzo los estandares para aplicar el descuento:("<<endl;
		pagofinal=comprarealizada;
		cout<<pagofinal<<endl;
		cout<<"Vuelva otro dia y compre mas productos: "<<endl;
	}
		
	} else{
		cout<<"INGRESASTE UN NUMERO NEGATIVO";
	}
	
	return 0;
}

