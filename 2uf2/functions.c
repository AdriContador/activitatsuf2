/*
 * functions.c
 *
 *  Created on: 12 ene 2022
 *      Author: adricontador
 */
#include <stdio.h>
int introduir() {
	int num;
	do {
		printf("Introdueix la quantitat de segons:");
		scanf("%d", &num);
	} while (num < 0);
	return num;
}

void time(int segons) {
	int residu, cont;
	cont=0;
	do {
		residu = segons % 86400;
		segons = segons / 86400;
		printf("Són %d dies, ", segons);
	} while (segons > 86400);
	do {
		segons = residu/3600;
		residu = residu%3600;
		printf("%d hores, ", segons);
	} while (segons > 3600);
	do {
		segons = residu/60;
		residu = residu%60;
		printf("%d minuts i ", segons);
	}while (segons>60);
	do {
		printf("%d segons.", residu);
		cont=cont+1;
	}while (cont<1);

}
