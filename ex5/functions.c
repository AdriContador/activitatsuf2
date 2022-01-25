/*
 * functions.c
 *
 *  Created on: 21 ene 2022
 *      Author: adricontador
 */
int value(){
	int num;
	printf("Introdueix un nombre enter: ");
	scanf("%d", &num);
	return num;
}

void change(num1, num2){
	int aux;
	aux=num1;
	num1=num2;
	num2=aux;
	printf("El valor de num1 és %d i el valor de num2 és %d.",num1, num2);
}
