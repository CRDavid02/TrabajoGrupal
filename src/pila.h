#ifndef PILA_H
#define PILA_H

#include "lista.h"

struct NodoPila {
 string descripcion;
  NodoPila* siguiente;
};

void pushiHistorial(NodoPila*& cima, const string& desc);
void popHistorial(NodoPila*& cima);
void verHistorial(NodoPila*cima);

#endif
