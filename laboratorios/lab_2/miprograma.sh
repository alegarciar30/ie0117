#!/bin/bash

# Este programa calcula cuantos dias faltan para cierto mes del 2024.
# La variable MES_LECTURA contiene el mes que se desea ingresar. Bash solamente admite fechas en ingles, no espanol

MES_LECTURA='November'


TIEMPO_SEGUNDOS=$(date --date="1 $MES_LECTURA 2024" +"%s")
HOY=$(date +"%s")


DIFERENCIA=$(($TIEMPO_SEGUNDOS - $HOY))

DIF_DIAS=$((DIFERENCIA / (60*60*24)))

SEM=$(date +%"A")
DIA=$(date +%"d")
MES=$(date +%"B")
ANO=$(date +%"Y")

echo "Hoy es $SEM, $DIA de $MES del ano $ANO. Faltan $DIF_DIAS dias para el mes de $MES_LECTURA"



