// problema4.cpp
/* 4. Función que devuelva la media de un arreglo o vector pasado
 * como parametro. Hagala para ambos. */

#include "cabeceras.h"

void problema4(void)
{
  cout << "--- Media de un arreglo o vector ---" << endl;

  // Media del arreglo:
  cout << endl;
  cout << "Media del arreglo: " << media_arreglo(arreglo, tamagno) << endl;

  // Vector:
  vector<int> un_vector(tamagno);
  //   copiar arreglo a un vector:
  for(int i=0; i < tamagno; i++)
    un_vector[i] = arreglo[i];
  //   media del vector:
  cout << endl << "Mínimo del vector: " << media_vector(un_vector) << endl;
}
