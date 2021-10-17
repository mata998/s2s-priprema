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

////////

void ubaciNaPocetak(int noviBr, int niz[], int* n) {
	// *n = broj   n = adresa
	for (int i = *n; i > 0; i--) {
		niz[i] = niz[i - 1];

	}
	niz[0] = noviBr;
	(*n)++;
}

void ubaciNaIndex(int noviBr, int index, int niz[], int* n) {

	for (int i = *n; i > index; i--) {
		niz[i] = niz[i - 1];

	}

	niz[index] = noviBr;
	(*n)++;
}

void sortiranoUbaci(int noviBr, int niz[], int* n) {
	// *n = broj  n = adresa

	for (int i = 0; i < *n; i++) {
		if (niz[i] > noviBr) {
			ubaciNaIndex(noviBr, i, niz, n);
			return;
		}
	}

	niz[(*n)++] = noviBr;

}

void sortiraj(int niz[], int n) {

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (niz[j] < niz[i]) {
				int c = niz[i];
				niz[i] = niz[j];
				niz[j] = c;
			}

		}
	}

}

void presekNizova() {
	int niz1[100] = { 1,1,1,2,3,4,5 };
	int n1 = 7;

	int niz2[100] = { 1, 3, 7, 8, 9 };
	int n2 = 5;

	int presek[100];
	int nPreseka = 0;

	for (int i = 0; i < n1; i++) {
		if (frekvencija(niz1[i], niz2, n2) > 0 &&
			frekvencija(niz1[i], presek, nPreseka) == 0) {

			presek[nPreseka++] = niz1[i];

		}
	}


	printNiz(presek, nPreseka);

}

int main() {





	printf("\n\n");
	system("pause");
	return 0;
}
