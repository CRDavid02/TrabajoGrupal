#include "lista.h"
using namespace std;

void insertarProceso(Proceso*& cabeza, int id, string nombre, int prioridad) {
    Proceso* nuevo = new Proceso;
    nuevo->id = id;
    nuevo->nombre = nombre;
    nuevo->prioridad = prioridad;
    nuevo->siguiente = NULL;

    if (!cabeza) {
        cabeza = nuevo;
    } else {
        Proceso* actual = cabeza;
        while (actual->siguiente) {
            actual = actual->siguiente;
        }
        actual->siguiente = nuevo;
    }
}

void mostrarProcesos(Proceso* cabeza) {
    if (!cabeza) {
        cout << "Lista vacia\n";
        return;
    }

    Proceso* actual = cabeza;
    while (actual) {
        cout << "ID: " << actual->id
             << " | Nombre: " << actual->nombre
             << " | Prioridad: " << actual->prioridad << endl;
        actual = actual->siguiente;
    }
}

void eliminarProceso(Proceso*& cabeza, int id) {
    if (!cabeza) return;

    if (cabeza->id == id) {
        Proceso* temp = cabeza;
        cabeza = cabeza->siguiente;
        delete temp;
        cout << "Proceso eliminado correctamente.\n";
        return;
    }

    Proceso* anterior = cabeza;
    Proceso* actual = cabeza->siguiente;

    while (actual && actual->id != id) {
        anterior = actual;
        actual = actual->siguiente;
    }

    if (!actual) {
        cout << "Proceso con ID " << id << " no encontrado.\n";
        return;
    }

    anterior->siguiente = actual->siguiente;
    delete actual;
    cout << "Proceso eliminado correctamente.\n";
}
