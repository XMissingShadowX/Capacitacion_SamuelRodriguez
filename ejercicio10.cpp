#include <iostream>

using namespace std;

// Conversor de temperatura
int main() {
    double tempIni, tempFin;
    string origen, destino;

    cout << "Ingrese la temperatura: ";
    cin >> tempIni;
    cout << "Ingrese la unidad de origen (C para Celsius, F para Fahrenheit): ";
    cin >> origen;

    if (origen == "c" || origen == "C") {
        double tempFin = (tempIni * 9/5) + 32;
        cout << tempIni << "°C son " << tempFin << "°F" << endl;
    } else if (origen == "f" || origen == "F") {
        double tempFin = (tempIni - 32) * 5/9;
        cout << tempIni << "°F son " << tempFin << "°C" << endl;
    } else {
        cout << "Unidad de origen no válida." << endl;
    }

    return 0;
}