#include <iostream>

using namespace std;

// COntador de vocales
int main() {
    string palabra;
    cout << "Ingrese una palabra: ";
    getline(cin, palabra);

    int c = 0;
    for (int i = 0; i < palabra.length(); i++) {
        char letra = tolower(palabra[i]);
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
            c++;
        }
    }

    cout << "Vocales en la palabra: " << c << endl;

    return 0;
}
