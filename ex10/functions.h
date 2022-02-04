/*
 * functions.h
 *
 *  Created on: 28 ene 2022
 *      Author: adricontador
 */

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#define MSG "Quants registres introduïras:\n"
#define MSG2 "\nIntrodueix el nom del llibre:\n"
#define MSG3 "Introdueix l'autor:\n"
#define MSG4 "Introdueix l'editorial:\n"
#define MSG5 "Introdueix el número d'unitas disponibles:\n"
#define MSG6 "Introdueix el día de publicació:\n"
#define MSG7 "Introdueix el mes de publicació:\n"
#define MSG8 "Introdueix l'any de publicació:\n"
#define MSG9 "Introdueix l'usuari que ha agafat el llibre:\n"
#define MSG10 "Introdueix el número de dies de prestec:\n"
#define MSG11 "\n\tLes dades són les següents: \n    +-------------------------------------------------------------------------------------------------------------------------------------------------------+\n"
#define MSG12 "    | Libre\t\t| Autor\t\t\t| Editorial\t\t| Unitats\t\t | Data de Publicació | Usuari\t\t| Prèstec \t\t|\n+---+-------------------------------------------------------------------------------------------------------------------------------------------------------+\n"
#define MSG13 "| %d | %s\t\t| %s\t\t| %s\t\t| %d\t\t| %d-%d-%d\t\t| %s | %d\t\t|\n+---+-------------------------------------------------------------------------------------------------------------------------------------------------------+\n"

struct usr {
	char name[50];
	int time;
};

struct date {
	int day;
	int month;
	int year;
};

struct biblio {
	char title[50];
	char autor[50];
	char editorial[50];
	struct date time;
	int units;
	struct usr user;
};

void modifyData(struct biblio*, int);
void printData(struct biblio*, int);

#endif

   

