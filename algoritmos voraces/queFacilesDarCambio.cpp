
#include "queFacilesDarCambio.h"
#include "iostream"
#include "vector" 

using namespace std;

int queFacilesDarCambio(){
    int x;
    cin>>x;

    vector<int> monedas = {10, 5, 2, 1};
    vector<int> cantidades = {0, 0, 0, 0};

    for (int i = 0; i < 4 && x > 0; i++) {
        int cantidad = x / monedas[i];
        cantidades[i] = cantidad;
        x -= cantidad * monedas[i];
    }

    for (int i = 0; i < 4; i++) {
        cout <<cantidades[i]<<' ';
    }

    return 0;
}
