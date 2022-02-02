/*
 * main.c
 *
 *  Created on: 26 ene 2022
 *      Author: adricontador
 */

#include <stdio.h>
#include "functions.h"

void main() {

	int size;
	size = validar(MSG);
	int num[size];
	omplir(num, size);
	printf("La mitjana és de %.2f.\n"
			"El valor més gran és %d i el "
			"més petit és %d.\n", mitjana(num, size)
			, max(num, size), min(num, size));
	ordenar(num, size);
}
