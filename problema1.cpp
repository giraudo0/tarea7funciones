/* 1. Función que devuelva la cantidad de múltiplos de n entre n1 y n2.
 * El valor de n, n1 y n2 se deben pasar como parámetro. */

#include "cabeceras.h"

void problema1(void)
{
  cout << "--- Múltiplos de n entre n1 y n2 ---" << endl;
  // Captura:
  int n = 1, n1 = 1, n2 = 2;
  cout << "n = ";
  cin >> n;
  cout << "n1 = ";
  cin >> n1;
  cout << "n2 = ";
  cin >> n2;

  // Resultado:
  cout << endl << "Hay " << cant_mult(n, n1, n2); // Llamada a la función
  cout << " múltiplos de " << n;
  cout << " entre " << n1 << " y " << n2 << "." << endl;
}
