#include "pila.h"
void pushHistorial(NodoPia*& cima, const string& desc) {
  NodoPila* nuevo = new NodoPila{desc, cima;
  cima = nuevo;
}
void popHistorial(NodoPila*& cima) {
  if (!cima) {
cout << " Historial vacio. \n";
return;
  }
NodoPila* temp = cima;
cima = cima -> siguiente;
delete temp;
}
void verHistorial(NodoPila* cima) {
  if (!cima) {
cout <<"Hiatorial vacio. \n";
return;
  }
NodoPila* actual = cima;
while (actual) {
cout << actual -> descripcion << endl;
actual = actual ->siguiente;
  }
}
