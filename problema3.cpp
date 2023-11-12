/* 3. Función que devuelva el minimo elemento de un arreglo o vector
 * pasado como parametro. Hagala para ambos. */

#include "cabeceras.h"

void problema3(void)
{
  cout << "--- Mínimo de un arreglo o vector ---" << endl;

  // Mínimo del arreglo:
  cout << endl;
  cout << "Mínimo del arreglo: " << min_arreglo(arreglo, tamagno) << endl;

  // Vector:
  vector<int> un_vector(tamagno);
  //   copiar arreglo a un vector:
  for(int i=0; i < tamagno; i++)
    un_vector[i] = arreglo[i];
  //   mínimo del vector:
  cout << endl << "Mínimo del vector: " << min_vector(un_vector) << endl;
}
