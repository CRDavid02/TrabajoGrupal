#include <iostream>
#include "cola.h"
using namespace std;

void encolar(NodoCola*& frente, NodoCola*& fin, Proceso* proceso) {
    NodoCola* nuevo = new NodoCola;
    nuevo->proceso = proceso;
    nuevo->siguiente = NULL;

    if(!frente) {
        frente = fin = nuevo;
    } else {
        fin->siguiente = nuevo;
        fin = nuevo;
    }
}

Proceso* desencolar(NodoCola*& frente, NodoCola*& fin) {
    if (!frente) return NULL;

    NodoCola* temp = frente;
    Proceso* proceso = temp->proceso;
    frente = frente->siguiente;

    if (!frente) fin = NULL;
    delete temp;
    return proceso;
}

void mostrarCola(NodoCola* frente) {
    NodoCola* actual = frente;
    while (actual) {
        cout<< "Proceso: " << actual->proceso->nombre
            <<"| ID: " << actual->proceso->id<< endl;
        actual = actual-> siguiente;
    }
}

