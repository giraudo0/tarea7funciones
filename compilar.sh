#!/bin/bash
clear
echo "Compilando..."
g++ main.cpp funciones.cpp datos.cpp\
  problema1.cpp \
  problema2.cpp \
  problema3.cpp \
  problema4.cpp \
  -o tarea7funciones
echo "Ejecutando..."
echo ""
./tarea7funciones
echo ""
echo "Fin"
