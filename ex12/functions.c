/*
 * functions.c
 *
 *  Created on: 4 feb 2022
 *      Author: adricontador
 */

#include <stdio.h>
#include "functions.h"

int introduccio(char *msg){
	int num;
	do{
		printf(msg);
		scanf("%d", &num);
	}while (num<1);
	return num;
}

int validar(char *msg2){
	int num;
	do{
		printf(msg2);
		scanf("%d", &num);
	}while (num<1 ||  num>50);
	return num;
}

void canvi(int *llistaNum, int size){
	for (int i=0;i<size-1;i++){
		for (int j=i+1;j<size;j++){
			if (llistaNum[i]<llistaNum[j]){
				int canvi=llistaNum[i];
				llistaNum[i]=llistaNum[j];
				llistaNum[j]=canvi;
			}
		}
	}
}

void mostrar(int *llistaNum, int size){
	printf("L'array ordenat de major a menor: [");
	for (int i=0;i<size;i++){
		if(i!=size-1){
			printf("%d,", llistaNum[i]);
		}else{
		printf("%d", llistaNum[i]);
		}
	}
	printf("]");
}
