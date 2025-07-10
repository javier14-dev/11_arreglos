#include <iostream>
using namespace std;

int main() {
    int numeroElementos, numeroMayor, A[20];
    cout << "Ingrese el cantidad de elementos del arreglo: ";
    cin >> numeroElementos;
    for (int i = 0; i < numeroElementos; i++) {
        cout << "Ingrese el elemento " << i + 1 << " del arreglo: ";
        cin >> A[i];
    }
    numeroMayor = A[0];
    for (int i = 1; i < n; i++) {
        if (A[i] > numeroMayor) {
            numeroMayor = A[i];
        }
    }
    cout << "El mayor elemento del arreglo es: "<< numeroMayor;
    return 0;
}