<<<<<<< HEAD
#include <iostream>
using namespace std;

int main() {
    int opcion;

    do {
        cout << "\n=== MEN� CL�NICA ===\n";
        cout << "1. Registrar paciente\n";
        cout << "2. Listar pacientes\n";
        cout << "3. Agendar turno\n";
        cout << "4. Atender paciente\n";
        cout << "5. Ver historial m�dico\n";
        cout << "6. Editar paciente\n";
        cout << "7. Eliminar paciente\n";
        cout << "0. Salir\n";
        cout << "Ingrese una opci�n: ";
        cin >> opcion;

        if (opcion == 1) {
            cout << ">> Registrar paciente (aqu� ir�a el c�digo)...\n";
        } 
        else if (opcion == 2) {
            cout << ">> Listar pacientes (aqu� ir�a el c�digo)...\n";
        } 
        else if (opcion == 3) {
            cout << ">> Agendar turno (aqu� ir�a el c�digo)...\n";
        } 
        else if (opcion == 4) {
            cout << ">> Atender paciente (aqu� ir�a el c�digo)...\n";
        } 
        else if (opcion == 5) {
            cout << ">> Ver historial m�dico (aqu� ir�a el c�digo)...\n";
        } 
        else if (opcion == 6) {
            cout << ">> Editar paciente (aqu� ir�a el c�digo)...\n";
        } 
        else if (opcion == 7) {
            cout << ">> Eliminar paciente (aqu� ir�a el c�digo)...\n";
        } 
        else if (opcion == 0) {
            cout << ">> Saliendo del sistema...\n";
        } 
        else {
            cout << ">> Opci�n inv�lida.\n";
        }

    } while (opcion != 0);

    return 0;
}

=======
//tarea
//otra forma
>>>>>>> 0a09387bc9ef203544317b08763fb70c2219f89b
