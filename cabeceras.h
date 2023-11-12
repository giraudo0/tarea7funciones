// Evitar duplicidad de código:
#pragma once

#include <iostream>
using namespace std;

// Datos:
extern const int tamagno;
extern const int arreglo[];
/* 'extern' porque las variables son definidas en otro archivo, en éste
 * caso en 'datos.cpp'. Si no se usa, al compilar aparecen errores
 * de variable no inicializada. */

// Funciones:
int cantmult(int num, int x, int y);
int multarreglo(const int a[], int num, const int tam);
int min_arreglo(const int a[], const int tam);

// Problemas:
void problema1(void);
void problema2(void);
void problema3(void);
