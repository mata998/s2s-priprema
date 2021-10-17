#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printNiz(int niz[], int n) {
	if (n == 0) {
		printf("\nNiz je prazan");
		return;
	}

	printf("\nNiz je: ");

	for (int i = 0; i < n; i++) {
		printf("%d ", niz[i]);
	}

	printf("\n");
}

void ispisUnazad(int niz[], int n) {
	printf("\nNiz ispisan unazad je: ");

	for (int i = n - 1; i >= 0; i--) {
		printf("%d ", niz[i]);
	}

}

// aritmeticka obicna ...

float aritmetickaNeparnih(int niz[], int n) {
	if (n == 0) {
		return 0;
	}

	int suma = 0;
	int brojNeparnih = 0;

	for (int i = 0; i < n; i++) {

		if (niz[i] % 2 == 1) {
			suma = suma + niz[i];
			brojNeparnih++;
		}

	}

	float aritmeticka = (float)suma / brojNeparnih;

	return aritmeticka;
}

void unosElemenata(int niz[], int* n) {
	int noviElement;

	printf("Unosite elemente: ");

	while (1) {
		scanf("%d", &noviElement);
		if (noviElement == 0) {
			break;
		}
		niz[*n] = noviElement;
		(*n)++;
	}

}

int frekvencija(int broj, int niz[], int n) {
	int brojac = 0;

	for (int i = 0; i < n; i++) {
		if (niz[i] == broj) {
			brojac++;
		}

	}

	return brojac;
}

void unosBezPonavljanja(int niz[], int* n) {
	// *n = broj   n = adresa
	int broj;
	printf("Unesite brojeve: ");

	while (1) {
		scanf("%d", &broj);

		if (broj == 0) {
			break;
		}

		if (frekvencija(broj, niz, *n) == 0) {
			niz[(*n)++] = broj;

		}

	}


}


int main() {


	int niz[100] = { 1,2,3,4,5,6 };
	int n = 6;





	printf("\n\n");
	system("pause");
	return 0;
}
