#ifndef PILA_H
#define PILA_H

#include <string>
using namespace std;

struct NodoPila {
    string descripcion;
    NodoPila* siguiente;
};

void pushHistorial(NodoPila*& cima, const string& desc);
void popHistorial(NodoPila*& cima);
void verHistorial(NodoPila* cima);

#endif