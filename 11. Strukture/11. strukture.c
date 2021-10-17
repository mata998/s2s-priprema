#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct razlomak {
	int brojilac;
	int imenilac;
} RAZLOMAK;

float decimalni(RAZLOMAK razlomak) {

	float rezultat = (float) razlomak.brojilac / razlomak.imenilac;

	return rezultat;
}

void main() {

	struct razlomak r1;

	r1.brojilac = 10;
	r1.imenilac = 20;


	RAZLOMAK r2 = { 1,3 };


	



	printf("\n\n");
}
