/*
 * main.c
 *
 *  Created on: 20 ene 2022
 *      Author: adricontador
 */


#include <stdio.h>
#include "functions.h"

void main(){
	int num, num2;
	num = validacio();
	num2 = binari(num);
	printf("El número en binari és ");
	printf("%d", num2);
}
