/*
 * functions.c
 *
 *  Created on: 25 ene 2022
 *      Author: adricontador
 */

int value(){
	int num;
	do{
		printf("Introdueix un nombre enter: ");
		scanf("%d", &num);
		return num;
	}while(num<1);
}

int value2(){
	int num;
	do{
	printf("Introdueix el nombre enter al que el vols elevar: ");
	scanf("%d", &num);
	return num;
	}while(num<1);
}

void elevate(num1, num2){
	int aux=1, i;
	for (i=0;i<num2;i++){
	aux=num1*aux;
	}
	printf("El valor és %d.",aux);
}
