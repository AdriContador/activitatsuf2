/*
 * main.c
 *
 *  Created on: 27 ene 2022
 *      Author: adricontador
 */

#include <stdio.h>
#include "functions.h"

void main() {

	unsigned long long decimal;
	int i = 0;
	char bin[10];

	decimal = validar(MSG, &i);
	sprintf(bin, "%llu",  decimal);
	printf("Aquest nombre en decimal és %llu",conversio(&bin, i));
}

