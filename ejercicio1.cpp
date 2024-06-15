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

    promedio = (calificacion1 + calificacion2 + calificacion3) / 3;
    cout << "El promedio es: " << promedio << endl;
    if (promedio >= 70) {
        cout << "El estudiante aprueba el curso." << endl;
    } else {
        cout << "El estudiante reprueba el curso." << endl;
    }

    return 0;
}
