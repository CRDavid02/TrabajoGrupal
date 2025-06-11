#ifndef COLA_H
#define COLA_H

#include "lista.h"

struct NodoCola {
    Proceso* proceso;
    NodoCola* siguiente;
};

void encolar(NodoCola*& frente, NodoCola*& fin, Proceso* proceso);
Proceso* desencolar(NodoCola*& frente, NodoCola*& fin);
void mostrarCola(NodoCola* frente);

#endif