<<<<<<< HEAD
#include <iostream>
using namespace std;

int main() {
    int opcion;

    do {
        cout << "\n=== MENÚ CLÍNICA ===\n";
        cout << "1. Registrar paciente\n";
        cout << "2. Listar pacientes\n";
        cout << "3. Agendar turno\n";
        cout << "4. Atender paciente\n";
        cout << "5. Ver historial médico\n";
        cout << "6. Editar paciente\n";
        cout << "7. Eliminar paciente\n";
        cout << "0. Salir\n";
        cout << "Ingrese una opción: ";
        cin >> opcion;

        if (opcion == 1) {
            cout << ">> Registrar paciente (aquí iría el código)...\n";
        } 
        else if (opcion == 2) {
            cout << ">> Listar pacientes (aquí iría el código)...\n";
        } 
        else if (opcion == 3) {
            cout << ">> Agendar turno (aquí iría el código)...\n";
        } 
        else if (opcion == 4) {
            cout << ">> Atender paciente (aquí iría el código)...\n";
        } 
        else if (opcion == 5) {
            cout << ">> Ver historial médico (aquí iría el código)...\n";
        } 
        else if (opcion == 6) {
            cout << ">> Editar paciente (aquí iría el código)...\n";
        } 
        else if (opcion == 7) {
            cout << ">> Eliminar paciente (aquí iría el código)...\n";
        } 
        else if (opcion == 0) {
            cout << ">> Saliendo del sistema...\n";
        } 
        else {
            cout << ">> Opción inválida.\n";
        }

    } while (opcion != 0);

    return 0;
}

=======
//tarea
//otra forma
>>>>>>> 0a09387bc9ef203544317b08763fb70c2219f89b
