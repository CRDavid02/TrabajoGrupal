int main() {
    // Inicialización de estructuras de datos
    Proceso* lista = NULL;       // Lista enlazada para almacenar todos los procesos
    NodoCola* frente = NULL;     // Puntero al frente de la cola de procesos listos
    NodoCola* fin = NULL;        // Puntero al final de la cola de procesos listos
    NodoPila* historial = NULL;  // Puntero a la cima de la pila del historial

    int opcion;
    do {
        // Menú principal
        cout << "===== MENU PRINCIPAL =====" << endl;
        cout << "1. Agregar proceso." << endl;
        cout << "2. Ver lista de procesos." << endl;
        cout << "3. Encolar proceso." << endl;
        cout << "4. Ejecutar siguiente proceso." << endl;
        cout << "5. Ver historial." << endl;
        cout << "0. Salir." << endl;
        cout << "Opcion: ";
        cin >> opcion;

        int id, prioridad;
        string nombre;

        switch (opcion) {
            case 1:  // Agregar nuevo proceso a la lista
                cout << "ID: "; cin >> id;
                cout << "Nombre: "; cin >> nombre;
                cout << "Prioridad: "; cin >> prioridad;
                insertarProceso(lista, id, nombre, prioridad);
                break;
                
            case 2:  // Mostrar todos los procesos en la lista
                mostrarProcesos(lista);
                break;
                
            case 3:  // Encolar un proceso existente
                cout << "ID a encolar: "; cin >> id;
                {
                    // Buscar el proceso en la lista
                    Proceso* temp = lista;
                    while (temp && temp->id != id) temp = temp->siguiente;
                    
                    // Si se encontró, encolar; si no, mostrar mensaje
                    if (temp) encolar(frente, fin, temp);
                    else cout << "No se encontró el proceso." << endl;
                }
                break;
                
            case 4:  // Ejecutar proceso (desencolar)
                {
                    Proceso* p = desencolar(frente, fin);
                    if (p) {
                        cout << "Ejecutando: " << p->nombre << endl;
                        // Registrar en el historial
                        pushHistorial(historial, "Ejecutado: " + p->nombre);
                    } else {
                        cout << "Cola vacia." << endl;
                    }
                }
                break;
                
            case 5:  // Mostrar historial de ejecución
                verHistorial(historial);
                break;
        }

    } while (opcion != 0);  // Salir cuando se ingrese 0

    return 0;
}
