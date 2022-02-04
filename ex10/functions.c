/*
 * functions.c
 *
 *  Created on: 28 ene 2022
 *      Author: adricontador
 */

#include <stdio.h>
#include "functions.h"

void modifyData(struct biblio *ll, int size) {

	for (int i = 0; i < size; i++) {


		printf(MSG2);
		scanf("%s", ll[i].title);


		printf(MSG3);
		scanf("%s", ll[i].autor);


		printf(MSG4);
		scanf("%s", ll[i].editorial);


		printf(MSG5);
		scanf("%d", &ll[i].units);


		printf(MSG6);
		scanf("%d", &ll[i].time.day);


		printf(MSG7);
		scanf("%d", &ll[i].time.month);


		printf(MSG8);
		scanf("%d", &ll[i].time.year);


		printf(MSG9);
		scanf("%s", ll[i].user.name);


		printf(MSG10);
		scanf("%d", &ll[i].user.time);
	}
}

void printData(struct biblio *ll, int size) {

	printf(MSG11);
	printf(MSG12);
	for (int i = 0; i < size; i++) {

		printf(MSG13, i + 1, ll[i].title, ll[i].autor, ll[i].editorial, ll[i].units,
				ll[i].time.day, ll[i].time.month, ll[i].time.year, ll[i].user.name,
				ll[i].user.time);
	}
}
