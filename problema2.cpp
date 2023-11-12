// problema2.cpp
/* 2. Función que devuelva cuantos elementos de un arreglo o vector son
 * múltiplos de n. Se debe pasar como parámetro el arreglo o vector y
 * devolver la cantidad de múltiplos de n. */

#include "cabeceras.h"

void problema2(void)
{
  cout << "--- Múltiplos de n en un arreglo ---" << endl;
  
  cout << "n = ";
  int n = 1;
  cin >> n;

  cout << endl << "En el arreglo hay ";
  cout << mult_arreglo(arreglo, n, tamagno);
  cout << " múltiplos de " << n << "." << endl;
}
