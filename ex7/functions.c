/*
 * functions.c
 *
 *  Created on: 26 ene 2022
 *      Author: adricontador
 */

#include <stdio.h>
#include "functions.h"

int validar(char *msg){

	int num;
	do{
		printf("%s", msg);
		scanf("%d", &num);
	} while (num < 1 || num > 50);

	return num;
}

int notes(char *msg){

	int num;
	do{
		printf("%s", msg);
		scanf("%d", &num);
	} while (num < 1 || num > 10);

	return num;
}

void omplir(int *num, int size){

	int i;

	for (i = 0; i < size; i++){
		num[i] = notes(MSG2);
	}
}

float mitjana(int *num, int size){

	int i;
	float j = 0;

	for (i = 0; i < size; i++){
		j = j + num[i];
	}
	j = j / size;
	return j;
}

int max(int *num, int size){

	int i, j = 0;

	for (i = 0; i < size; i++){
		if(num [i] > j){
			j = num[i];
		}
	}
	return j;
}

int min(int *num, int size){

	int i = 0, j = 1;

	j = num[i];
	for (i = 0; i < size; i++){
		if(j > num[i]){
			j = num[i];
		}
	}
	return j;
}

void ordenar(int num[], int size){
 int i, j;
 for (int i = 0; i < size-1; i++) {
     for(int j = i + 1; j < size; j++) {
            if (num[i] > num[j]) {
            int canvi = num[i];
             num[i] = num[j];
             num[j] = canvi;
             }
     }
 }
 printf("L'array ordenat és: [");
 for (int i = 0; i < size;i++) {
     if(i!=size-1){
         printf("%d,",num[i]);
        }
        else{
            printf("%d",num[i]);
        }
  }
  printf("]");
}

