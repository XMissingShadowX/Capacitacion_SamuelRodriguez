#include <iostream>

using namespace std;

// Detector de palindromo
int main() {
    string palabra;
    cout << "Ingrese una palabra: ";
    getline(cin, palabra);

    for (int i = 0; i < palabra.length(); i++) {
        if (palabra[i] == ' ') {
            palabra.erase(i, 1); //borrar espacios
            i--; 
        } else {
            palabra[i] = tolower(palabra[i]); // Convertir a minúsculas
        }
    }
    cout << "Palabra ingresada sin espacios, en minusculas: " << palabra << endl;

    bool esPalindromo = true; //bandera
    int largo = palabra.length(); 

    for (int i = 0; i < largo / 2; i++) {
        char p1 = palabra[i];
        char p2 = palabra[largo - i - 1];
        if (p1 != p2) {
            esPalindromo = false;
            break;
        }
    }

    if (esPalindromo) {
        cout << "Es palindromo = True" << endl;
    } else {
        cout << "Es palindromo = False" << endl;
    }
    return 0;
}