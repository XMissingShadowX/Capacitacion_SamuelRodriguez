#include <iostream>

using namespace std;

// Buscador del numero mayor
int main() {
    int n;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++) {   //cargar arreglo de numeros
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> arr[i];
    }

    int max = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "El numero mayor es: " << max << endl;
}