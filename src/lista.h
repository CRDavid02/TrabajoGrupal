#ifndef LISTA_H
#define LISTA_H

#include <iostream>
using namespace std;

// Estructura base
struct Proceso {
  int id:
  string nombre;
  int prioridad;
  Proceso* siguiente;
};

//funciones de lista
void insertarProceso(proceso*& cabeza, int id, string nombre, int prioridad);
void mostrarProcesos(Proceso* cabeza);
void eliminarProceso(Proceso*& cabeza, int id);

#endif
