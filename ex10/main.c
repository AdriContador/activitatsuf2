/*
 * main.c
 *
 *  Created on: 28 ene 2022
 *      Author: adricontador
 */



#include <stdio.h>
#include "functions.h"

void main() {

	int size;

	do {
		printf(MSG);
		scanf("%d", &size);
	} while (size < 1);

	struct biblio llibre[size];

	modifyData(llibre, size);
	printData(llibre, size);

}
