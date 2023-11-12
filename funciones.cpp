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

// Cantidad de múltiplos de un número en un arreglo:
int multarreglo(const int a[], int num, const int tam)
{
  int cantidad = 0;
  for(int i=0; i < tam; i++)
  {
    if(a[i] % num == 0)
      cantidad++;
  }
  
  return cantidad;
}

// Mínimo de un arreglo:
int min_arreglo(const int a[], const int tam)
{
  int min = a[0];
  for(int i=1; i < tam; i++)
  {
    if(a[i] < min)
      min = a[i];
  }

  return min;
}
