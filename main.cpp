// main.cpp
/* Función main() acumula los cuatro problemas */

#include "cabeceras.h"

int main(void)
{
  cout << "-- -- Tarea 7: Funciones -- --" << endl;
  int opcion = 0;
  do
  {
    cout << endl << "---o---" << endl;
    cout << "Elija un número de problema:" << endl;
    cout << "  1) Múltiplos entre dos números" << endl;
    cout << "  2) Múltiplos de n en un arreglo" << endl;
    cout << "  3) Mínimo en un arreglo o vector" << endl;
    cout << "  4) Media en un arreglo o vector" << endl;
    cout << "  0) Salir" << endl;
    cout << "   > ";
    cin >> opcion;
    cout << endl;

    switch(opcion)
    {
      case 0:
	break;
      case 1:
	problema1();
	break;
      case 2:
	problema2();
	break;
      case 3:
	problema3();
	break;
      case 4:
	problema4();
	break;
      default:
	cout << "Opción incorrecta" << endl;
    }
  }while(opcion);

  return 0;
}
