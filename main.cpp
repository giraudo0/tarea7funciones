#include "cabeceras.h"

int main(void)
{
  cout << "-- -- Tarea 7: Funciones -- --" << endl << endl;
  
  cout << "Elija un número de problema:" << endl;
  cout << "1) Múltiplos entre dos números" << endl;
  cout << "2) Múltiplos en un arreglo" << endl;
  cout << "3) Mínimo en un arreglo o vector" << endl;
  cout << "4) Media en un arreglo o vector" << endl;
  int opcion = 0;
  cout << " > ";
  cin >> opcion;
  cout << endl;

  switch(opcion)
  {
    case 1:
      problema1();
      break;
   /* case 2:
      problema2();
      break;
    case 3:
      problema3();
      break;
    case 4:
      problema4();
      break;*/
    default:
      cout << "Opción incorrecta";
  }

  return 0;
}
