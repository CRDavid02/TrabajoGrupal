#include <iostream>
#include "lista.h"
#include "cola.h"
#include "pila.h"
using namespace std;

int main() {
    Proceso* lista = NULL;
    NodoCola* frente = NULL;
    NodoCola* fin = NULL;
    NodoPila* historial = NULL;

    int opcion;
    do {
        cout << "===== MENU PRINCIPAL =====" <<endl;
        cout << "1. Agregar proceso." <<endl;
        cout << "2. Ver lista de procesos." <<endl;
        cout << "3. Encolar proceso." <<endl;
        cout << "4. Ejecutar siguiente proceso." <<endl;
        cout << "5. Ver historial." <<endl;
        cout << "0. Salir." <<endl;
        cout << "Opcion: ";
        cin >> opcion;

        int id, prioridad;
        string nombre;

        switch (opcion) {
            case 1:
                cout << "ID: "; cin >> id;
                cout << "Nombre: "; cin >> nombre;
                cout << "Prioridad: "; cin >> prioridad;
                insertarProceso(lista, id, nombre, prioridad);
                break;
            case 2:
                mostrarProcesos(lista);
                break;
            case 3:
                cout << "ID a encolar: "; cin >> id;
                {
                    Proceso* temp = lista;
                    while (temp && temp->id != id) temp = temp->siguiente;
                    if (temp) encolar(frente, fin, temp);
                    else cout << "No se encontró el proceso." <<endl;
                }
                break;
            case 4:
                {
                    Proceso* p = desencolar(frente, fin);
                    if (p) {
                        cout << "Ejecutando: " << p->nombre << endl;
                        pushHistorial(historial, "Ejecutado: " + p->nombre);
                    } else {
                        cout << "Cola vacia." <<endl;
                    }
                }
                break;
            case 5:
                verHistorial(historial);
                break;
        }

    } while (opcion != 0);

    return 0;
}
