/*
 * main.c
 *
 *  Created on: 4 feb 2022
 *      Author: adricontador
 */


#include <stdio.h>
#include "functions.h"

void main() {
	int size;
	size=validar(MSG);
	int llistaNum[size];
	for (int i=0;i<size;i++){
		llistaNum[i]=introduccio(MSG2);
	}
	canvi(llistaNum, size);
	mostrar(llistaNum, size);
}
