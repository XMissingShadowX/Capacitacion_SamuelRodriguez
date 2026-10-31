#include <iostream>

using namespace std;

// Calculadora de propinas
int main() {
    double cuenta, propinaPorc, propinaDin;
    cout << "Ingrese el monto de la cuenta: $";
    cin >> cuenta;
    cout << "Ingrese el porcentaje de propina: ";
    cin >> propinaPorc;
    propinaDin = cuenta * propinaPorc / 100;


    cout << "Propina: $" << propinaDin << endl;
    cout << "Total a pagar: $" << (cuenta +   propinaDin) << endl;

}
    
