/*
 * main.c
 *
 *  Created on: 10 feb 2022
 *      Author: adricontador
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "functions.h"

void main() {
	int aux2, trobat, size=10, min=15, max=200;
	int num[size];

	omplir(num, size, min, max);


	printf(MSG6);
			scanf("%d", &aux2);
			trobat = cercar(num, size, aux2);
			if (trobat == 1) {
				printf(MSG7);
			} else {
				printf(MSG8);
			}

	mostrar(num,size);
}
