#include <iostream>
using namespace std;

int main() {
    int q, r, s;
    cout << "Ingrese el primer numero (q): ";
    cin >> q;
    cout << "Ingrese el segundo numero (r): ";
    cin >> r;
    cout << "Ingrese el tercer numero (s): ";
    cin >> s;

    if (q % r == 0 && q % s == 0) {
        cout << "El numero " << q << " es multiplo de " << r << " y " << s << "." << endl;
    } else {
        cout << "El numero " << q << " no es multiplo de " << r << " y " << s << "." << endl;
    }

    return 0;
}
