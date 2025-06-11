#include "cola.h"

void encolar(NodoCola*& frente, NodoCola*& fin, Proceso* proceso) {
    Nodo Cola* nuevo = new NodoCola{proceso, nullptr);

    if(!frente) {
        frente = fin = nuevo;
    } else {
        fin->siguiente = nuevo;
        fin = nuevo;
    }
}

Proceso* desencolar(NodoCola*& frente, NodoCola*& fin) {
    if (!frente) return nullptr;

    NodoCola* temp = frente;
    Proceso* proceso = temp->proceso;
    frente = frente->siguiente;

    if (!frente) fin = nullptr;
    delete temp;
    return proceso;
}

void mostrarCola(NodoCola* frente) {
    NodoCola* actual = frente;
    while (actual) {
        cout << "Proceso: " << actual->proceso->nombre<<"| ID: " << actual->proceso->id<< endl;
        actual = actual-> siguiente;
    }
}

