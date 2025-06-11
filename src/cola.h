#ifndef COLA_H        //Directiva para evitar inclusión múltiple del archivo
#define COLA_H

#include "lista.h"    //se incluye la definición de "Procesos"

//Estructura que representa a un nodo de la cola
struct NodoCola {  
  Proceso* proceso;        //puntero al proceso que contiene este nodo
  NodoCola* siguiente;     //Puntero al siguiente nodo en la cola
};

//Declaración de funciones relacionadas con la cola

//Inserta un proceso al final de la cola
void encolar(NodoCola*& frente, NodoCola*& fin, Proceso* proceso);

//Extrae (y retorna) el proceso en el frente de la cola
Proceso* desencolar(NodoCola*& frente, NodoCola*& fin);

//Muestra los procesos presentes en la cola
void mostrarCola(NodoCola* frente);

#endif //Fin del include guard
