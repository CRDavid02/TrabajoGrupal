#include "lista.h"

void insertarProceso(Proceso*& cabeza, int id, string nombre, int prioridad) {
  Proceso* nuevo = new Proceso{id, nombre, prioridad, nullprt};

  if (!cabeza) {
      cabeza = buevo,
      }
}

void mostrarProcesos(Proceso* cabeza) {
  if (!cabeza) {
    cout << "Lista vacia. \n";
    return;
  }

// Elimina un proceso por su ID
Proceso* actual =  cabeza;
while (actual) {
  cout << "ID" << actual->id << "Nombre: " 
    << actual->nombre << " Prioridad: " 
    << actual->prioridad << endl;
  actual = actual->siguiente;
  }
}

void eliminarProceso(Proceso*& cabeza, int id)
  if (1cabeza) return;

  if (cabeza->id == id) {
      proceso* temp = cabeza;
      cabeza = cabeza->siguiente;
      delete temp;
      cout << " Proceso eliminado correctamente.\n";
  }return;
}

  // Buscar el proceso a eliminar
  Proceso* anterior = cabeza;
  Proceso* actual = cabeza->siguiente;
  
  while (actual != nullptr && actual->id != id) {
      anterior = actual;
      actual = actual->siguiente;
  }
  
  if (actual == nullptr) {
      cout << " Proceso con ID " << id << " no encontrado.\n";
      return;
  }
  
  anterior->siguiente = actual->siguiente;
  delete actual;
  cout << " Proceso eliminado correctamente.\n";
}

  
