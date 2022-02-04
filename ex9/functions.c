/*
 * functions.c
 *
 *  Created on: 27 ene 2022
 *      Author: adricontador
 */

#ifndef FUNCTIONS_C_
#define FUNCTIONS_C_
#include <stdio.h>
#include "functions.h"

#define TEXT "Error. Aquest nombre no esta en base 2."

unsigned long long validar(char *msg, int *i) {

	unsigned long long num, num2, num3;
	int j, count;
	do {
		*i = 0;
		printf("%s", msg);
		scanf("%llu", &num);
		num2 = num;
		while (num2 != 0) {
			num2 = num2 / 10;
			*i = *i + 1;
		}
	} while (*i > 7);
	return num;
}

unsigned long long conversio(char *bin, int i) {
	unsigned long long dec = 0;
	int poten = 1;
	char actchar;
	for (int j = i - 1; j >= 0; j--) {
		actchar = bin[j];
		if (actchar == '1') {
			dec += poten;
		}
		poten = poten * 2;
	}
	return dec;
}


#endif /* FUNCTIONS_C_ */
