#include <iostream>

using namespace std;

// Inversor de arreglos
int main() {
    int n;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++) {   //cargar arreglo de numeros
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> arr[i];
    }

    int tam = sizeof(arr) / sizeof(arr[0]);
    cout << "Tamaño del arreglo: " << tam << endl;
    
    
    cout << "Arreglo original: ";
    for (int i = 0; i < tam; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "Arreglo invertido: ";
    for (int i = tam - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}