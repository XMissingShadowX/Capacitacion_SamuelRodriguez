#include <iostream>

using namespace std;

//Fibonacci
int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    int past = 0, antepast = 1, aux;
    
    cout << "Serie Fibonacci hasta " << n << ": ";
    for (int i = 0; i < n; i++) {
        
        if (i <= 1) {
            aux = i;
        } else {
            aux = past + antepast;  //Calcular el siguiente número de Fibonacci
            past = antepast;        //Actualizar el valor de past
            antepast = aux;         //Actualizar el valor de antepast
        }

        if (i == n - 1) {
            cout << aux << endl;
        } else {
            cout << aux << ", ";
        }
    }
}
