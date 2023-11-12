/* Definición de funciones */

#include "cabeceras.h"

// Cantidad de múltiplos de un número entre x y y:
int cantmult(int num, int x, int y)
{
  int cantidad = 0;

  for(int i=x; i <= y; i++)
  {
    if(i % num == 0)
      cantidad++;
  }

  return cantidad;
}
