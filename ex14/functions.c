/*
 * functions.c
 *
 *  Created on: 10 feb 2022
 *      Author: adricontador
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "functions.h"


void omplir(int *number, int size, int min, int max) {
	int i;
	srand(time(NULL));
	for (i = 0; i < size; i++) {
		number[i] = min + rand() % (max + 1 - min);
	}
}

int cercar(int *number, int size, int aux2) {

	int i, trobat = 0;

	for (i = 0; (i < size) && (trobat == 0); i++) {
		if (number[i] == aux2) {
			trobat = 1;
		}
	}
	return trobat;
}

void mostrar(int *number, int size) {

	int i;
	printf("\n  [");
	for (i = 0; i < size; i++) {
		if(i % 10 == 0 && i != 0){
			printf("\n  ");
		}
		if (i != size - 1) {
			printf("%d,", number[i]);
		} else {
			printf("%d", number[i]);
		}
	}
	printf("]");
}
