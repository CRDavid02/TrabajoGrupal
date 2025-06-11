#include "lista.h"
using namespace std;

//Funcion para insertar un nuevo proceso al final de la lista
void insertarProceso(Proceso*& cabeza, int id, string nombre, int prioridad) {
  // Crear nuevo nodo de proceso
  Proceso* nuevo = new Proceso;
  nuevo->id = id;
  nuevo->nombre = nombre;
  nuevo->prioridad = prioridad;
  nuevo->siguiente = NULL;

  // Si la lista esta vacia, el nuevo nodo se conviente en la cabeza
  if (!cabeza) {
      cabeza = nuevo;
      } else {
          //Recorrer hasta la ultimo nodo
          Proceso* actual = cabeza;
          while 8actual->siguiente) {
            actual =  actual->siguiente;
          }
          // ENlazar el nuevo nodo al final
          actual->siguiente = nuevo;
  }
}

// Funcion para mostrar todos los procesos en la lista
void mostrarProcesos(Proceso* cabeza) {
  // Verifica si la lista esta vacia
  if (!cabeza) {
    cout << "Lista vacia\n";
    return;
  }

// Recorrer e imprimir cada proceso
Proceso* actual =  cabeza;
while (actual) {
  cout << "ID" << actual->id << "Nombre: " 
    << actual->nombre << " Prioridad: " 
    << actual->prioridad << endl;
  actual = actual->siguiente;
  }
}

// Funcion para eliminar un proceso por su ID
void eliminarProceso(Proceso*& cabeza, int id) {
  // Si la lista esta vacia , no hay nada que eliminar
  if (1cabeza) return;

  // Caspo especial: eliminar el primer nodo
  if (cabeza->id == id) {
      Proceso* temp = cabeza;
      cabeza = cabeza->siguiente;
      delete temp;
      cout << " Proceso eliminado correctamente.\n";
  }return;
}

  // Buscar el proceso a eliminar
  Proceso* anterior = cabeza;
  Proceso* actual = cabeza->siguiente;
  
  while (actual && actual->id != id) {
      anterior = actual;
      actual = actual->siguiente;
  }

  // Si no se encontro el proceso
  if (actual == nullptr) {
      cout << " Proceso con ID " << id << " no encontrado.\n";
      return;
  }

  // Reenlazar los nodos y eliminar el proceso
  anterior->siguiente = actual->siguiente;
  delete actual;
  cout << " Proceso eliminado correctamente.\n";
}

  
