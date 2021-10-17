#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {

	printf("Hello World\n");
	printf("Novi red");     // \n Novi red  \t tabulator

	/*
	Ovo je komentar
	u vise redova
	*/

	/*
	int  ceo broj
	double / float  decimalni
	char   karakter
	*/

	int ceoBroj = 5;		// %d   %i
	char karakter = 'a';	// %c  OBAVEZNO POD JEDNIM NAVODNIKOM
	float decimalni = 5.6;	// %f
	double decimalni2 = 10.6; // %lf

	printf("\n\nVrednost promenljive ceoBroj = %d", ceoBroj);
	printf("\nkarakter = %c   decimalni = %.2f", karakter, decimalni);
	// .2 je da u ispisu zaokruzi na 2 decimale





	printf("\n\n");
	system("pause");
}
