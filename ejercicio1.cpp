#include <iostream>
using namespace std;

int main() {
    float calificacion1, calificacion2, calificacion3;
    float promedio;

    cout << "Ingrese la primera calificacion: ";
    cin >> calificacion1;
    cout << "Ingrese la segunda calificacion: ";
    cin >> calificacion2;
    cout << "Ingrese la tercera calificacion: ";
    cin >> calificacion3;
    
    if(calificacion1>=0 && calificacion2>=0 && calificacion3>=0 ){	
    
		promedio = (calificacion1 + calificacion2 + calificacion3) / 3;
    	cout << "El promedio es: " << promedio << endl;
    	if (promedio >= 70) {
    		cout << "El estudiante aprueba el curso." << endl;
    	} else {
    		cout << "El estudiante reprueba el curso." << endl;
    	}
    
	} else{
		cout<<"ERROR";
	}	

    return 0; 
}