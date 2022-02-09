/*
 * functions.c
 *
 *  Created on: 3 feb 2022
 *      Author: adricontador
 */
#include <stdio.h>
#include "functions.h"

void parells() {
	int llistaparells[SIZE], j=1, i;
		for(int i = 0; i<SIZE; i++) {
			if(j%2==0){
	            llistaparells[i] = j;
	        }else{
	        	i--;
	        }
			j++;
		}
		mostrar(llistaparells);
}

void mostrar(int *llista){
	for (int i=0; i<SIZE; i++){
		printf("%d", llista[i]);
	}
}


