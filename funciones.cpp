/* Definición de funciones */

#include "cabeceras.h"

// Cantidad de múltiplos de un número entre x y y:
int cant_mult(int num, int x, int y)
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
int mult_arreglo(const int a[], int num, const int tam)
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

// Mínimo de un vector:
int min_vector(vector<int> &vec)
{
  int min = vec[1];
  for(int i=1; i < vec.size(); i++)
    if(vec[i] < min)
      min = vec[i];
  return min;
}

// Media de un arreglo:
double media_arreglo(const int a[], const int tam)
{
  double med = 0;
  for(int i=0; i < tam; i++)
    med += a[i];
  med /= tam; // [1]
  //med /= (double)tam;
  //med /= double(tam);
  //double cant = tam; med /= cant;
  //double cant = double(tam); med /= cant;
  return med;
}

/* Nota:
 * [1] El resultado debería ser el número real 582789.06; pero da el
 * número entero 582789, a pesar de sustituir ésta línea por alguna de
 * las líneas comentadas abajo.
 */
