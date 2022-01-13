/*
 * functions.c
 *
 *  Created on: 12 ene 2022
 *      Author: adricontador
 */

int validate(){
	int num, i=0;
		do{
			printf("Escriu un nombre entre 10 i 5000:");
			scanf("%d", &num);
			i++;
		}while (num>5000 && i<3 || num<10 && i<3);
		if (num<10 || num>5000){
			printf("El número introduït no és vàlid.");
		}
		else{
		return num;
		}
}

