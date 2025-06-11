#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include <string>
using namespace std;

struct Proceso {
    int id;
    string nombre;
    int prioridad;
    Proceso* siguiente;
};

void insertarProceso(Proceso*& cabeza, int id, string nombre, int prioridad);
void mostrarProcesos(Proceso* cabeza);
void eliminarProceso(Proceso*& cabeza, int id);

#endif