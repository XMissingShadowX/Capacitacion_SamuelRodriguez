#include <iostream>

using namespace std;

// Validador de contraseñas
int main() {
    string contra;
    cout << "Ingrese la contraseña: ";
    cin >> contra;

    bool mayus = false;
    bool numero = false;
    bool longitud = false;

    if (contra.length() >= 8) {
        longitud = true;
    }

    for (int i = 0; i < contra.length(); i++) {
        char letra = contra[i];
        if (isupper(letra)) {
            mayus = true;
        }
        if (isdigit(letra)) {
            numero = true;
        }
    }

    if (!mayus) {
        cout << "La contraseña no tiene ninguna mayuscula" << endl;
    }
    if (!numero) {
        cout << "La contraseña no tiene ningun numero" << endl;
    }
    if (!longitud) {
        cout << "Contraseña menor a 8 caracteres" << endl;
    }

    if (mayus && numero && longitud) {
        cout << "Contraseña válida." << endl;
    }

    return 0;   
}