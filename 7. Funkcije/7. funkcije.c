#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void ispis() {
	printf("Hello World\n");

	// razmisli dal treba pokazati return ili ne
}

int saberi(int broj1, int broj2) {
	int zbir = broj1 + broj2;

	return zbir;
}

int faktorijel(int broj) {
	int proizvod = 1;

	for (int i = 1; i <= broj; i++) {
		proizvod = proizvod * i;
	}

	return proizvod;
}


// tek kroz zadatak
int zbirCifara(int broj) {
	int suma = 0;
	int cifra;

	while (broj > 0) {
		cifra = broj % 10;

		suma = suma + cifra;

		broj = broj / 10;

	}

	return suma;
}

void main() {

	// 3 tipa

	// void - funkcije koje samo nesto izvrsavaju, obavljaju neki posao za nas
	// int  - funkcije koje nesto racunaju i zanima nas sta su izracunale
	// funkcije provere - one stoje u ifu i proveracaju dal nesto JESTE ili NIJE


	ispis();
	ispis();
	ispis();


	int a = 5;
	int b = 3;

	int c = saberi(a,b);

	printf("c = %d", c);




	int a = 5, b = 3, c = 10;
	int rezultat;

	// rezultat = 5! + 3! + 10!

	rezultat = faktorijel(a) + faktorijel(b) + faktorijel(c);

	printf("rezultat = %d", faktorijel(4) );
	



	// Korisnik unosi 2 broja, 
	// program ispise sve brojeve u tom intervalu ciji je zbir cifara 7

	int broj1, broj2;

	printf("Unesite 2 broja: ");
	scanf("%d %d", &broj1, &broj2);

	for (int i = broj1; i <= broj2; i++) {

		if (zbirCifara(i) == 7) {
			printf("%d ", i);
		}

	}



	printf("\n\n");
}
