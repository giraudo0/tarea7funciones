#!/bin/bash
clear
echo "Compilando..."
g++ main.cpp funciones.cpp\
  problema1.cpp \
  problema2.cpp \
  -o tarea7funciones
echo "Ejecutando..."
echo ""
./tarea7funciones
echo ""
echo "Fin"
