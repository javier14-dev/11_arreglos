#include <iostream>
using namespace std;

int main() {
    int numeroElementos, numeroMayor, Arreglo[20];
    cout << "Ingrese el cantidad de elementos del arreglo: ";
    cin >> numeroElementos;
    for (int i = 0; i < numeroElementos; i++) {
        cout << "Ingrese el elemento " << i + 1 << " del arreglo: ";
        cin >> Arreglo[i];
    }
    numeroMayor = Arreglo[0];
    for (int i = 1; i < numeroElementos; i++) {
        if (Arreglo[i] > numeroMayor) {
            numeroMayor = Arreglo[i];
        }
    }
    cout << "El mayor elemento del arreglo es: "<< numeroMayor;
    return 0;
}