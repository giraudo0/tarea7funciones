/* 2. Función que devuelva cuantos elementos de un arreglo o vector son
 * múltiplos de n. Se debe pasar como parámetro el arreglo o vector y
 * devolver la cantidad de múltiplos de n. */

#include "cabeceras.h"

void problema2(void)
{
  cout << "--- Múltiplos de n en un arreglo ---" << endl;
  // Arreglo:
  int tamagno = 50;
  int arreglo[tamagno] = {784971, 753851, 846339, 884863, 927879, 124281, 530940, 507438, 733001, 780295, 446947, 849799, 510923, 344456, 943752, 140416, 518999, 980061, 447068, 820839, 537615, 827404, 510294, 680390, 683586, 353285, 212648, 183831, 148683, 544654, 775492, 920523, 777853, 542923, 478914, 679950, 891279, 963965, 147806, 274735, 471676, 417906, 666572, 965782, 524035, 110810, 519099, 267003, 543478, 640144};
  
  cout << "n = ";
  int n = 1;
  cin >> n;

  cout << endl << "En el arreglo hay ";
  cout << multarreglo(arreglo, n, tamagno);
  cout << " múltiplos de " << n << "." << endl;
}
