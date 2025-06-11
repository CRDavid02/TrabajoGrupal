#include <iostream>
#include "cola.h"
using namespace std;

//Función para encolar un proceso en la cola
void encolar(NodoCola*& frente, NodoCola*& fin, Proceso* proceso) {
    // Crear un nuevo nodo para la cola
    NodoCola* nuevo = new NodoCola;
    nuevo->proceso = proceso;    //Asignar el proceso al nodo
    nuevo->siguiente = NULL;    // El nuevo nodo no tiene siguiente (es el último)

    // Si la cola está vacía, el nuevo nodo será tanto al frente como el fin
    if(!frente) {
        frente = fin = nuevo;
    } else {
        //Si ya hay elementos, se agrega al final
        fin->siguiente = nuevo;
        fin = nuevo; //Actualizar el fin de la cola
    }
}

//Función para desencolar un proceso (sacar del frente)
Proceso* desencolar(NodoCola*& frente, NodoCola*& fin) {
    // Si la cola está vacía, se retorna NULL
    if (!frente) return NULL;

    NodoCola* temp = frente;                //Nodo temporal para eliminar
    Proceso* proceso = temp->proceso;        // Guardar el proceso que se va a devolver
    frente = frente->siguiente;              // Avanzar el frente

    // Si la cola puede vacía luego desencolar, actualizar también el fin
    if (!frente) fin = NULL;
    delete temp; //Liberar memoria del nodo eliminado
    return proceso; // Retornar el proceso extraído
}

//Función para mostrar todos los procesos en la cola
void mostrarCola(NodoCola* frente) {
    NodoCola* actual = frente; // Recorrer el frente de la cola
    while (actual) {
        cout<< "Proceso: " << actual->proceso->nombre
            <<"| ID: " << actual->proceso->id<< endl;
        actual = actual-> siguiente; // Avanzar al siguiente nodo
    }
}

