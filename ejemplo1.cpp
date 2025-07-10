#include <iostream>
using namespace std;

int numeroMayor(int arreglo[], int numeroElementos);
bool validacionDato(int numeroElementos);

int main() {
    int numeroElementos, mayor, Arreglo[100], i, sumaElementos;
    bool comprobar;
    sumaElementos = 0;
    cout << "Ingrese el cantidad de elementos del arreglo: ";
    cin >> numeroElementos;
    for (i = 0; i < numeroElementos; i++) {
        cout << "Ingrese el elemento " << i + 1 << " del arreglo: ";
        cin >> Arreglo[i];
        sumaElementos += Arreglo[i];
    }

    mayor = numeroMayor(Arreglo, numeroElementos);
    comprobar = validacionDato(numeroElementos);
    if(comprobar) {
        cout << "El numero de elementos tiene que ser mayor a 0" << endl;
        return 1;
    }
    cout << "La suma de elementos del arreglo es: " << sumaElementos << endl;
    cout << "El mayor elemento del arreglo es: "<< mayor << endl;
    return 0;
}

int numeroMayor(int arreglo[], int numeroElementos) {
    int numeroMayor = arreglo[0];
    for (int i = 1; i < numeroElementos; i++) {
        if (arreglo[i] > numeroMayor) {
            numeroMayor = arreglo[i];
        }
    }
    return numeroMayor;
}

bool validacionDato(int numeroElementos) {
    return numeroElementos < 0;
}