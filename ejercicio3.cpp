#include <iostream>

using namespace std;

//Bee Fight
int main() {
    int abejas, avispas;
    cout << "Ingrese la cantidad de abejas: ";
    cin >> abejas;
    cout << "Ingrese la cantidad de avispas: ";
    cin >> avispas;

    //puntajes por bando
    int puntajeAbejas = abejas * 2;
    int puntajeAvispas = avispas * 3;

    if (puntajeAbejas > puntajeAvispas) {
        cout << "Ganan las Abejas (" << puntajeAbejas << " vs " << puntajeAvispas << ")" << endl;
    } else if (puntajeAvispas > puntajeAbejas) {
        cout << "Ganan las Avispas (" << puntajeAvispas << " vs " << puntajeAbejas << ")" << endl;
    } else {
        cout << "Empate (" << puntajeAbejas << " = " << puntajeAvispas << ")" << endl;
    }
}
