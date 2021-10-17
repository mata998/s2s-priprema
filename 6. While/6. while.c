#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int broj = 0;

	while ( broj != 5 ) {
		printf("Unesite broj 5: ");
		scanf("%d", &broj);
	}



	do {
		printf("Unesite broj 5: ");
		scanf("%d", &broj);
	} while (broj != 5);




	int proizvod = 1;
	int broj;

	while (1) {
		printf("Unesite broj: ");
		scanf("%d", &broj);

		if (broj == 0) {
			break;
		}

		proizvod = proizvod * broj;
	}

	printf("\nProizvod unetih brojeva je: %d", proizvod);







	/*int n = 1;
	int cifra;*/
	// n = 1234
/*cifra = n % 10; // cifra = 4

n = n / 10;		// n = 123

cifra = n % 10; // cifra = 3

n = n / 10;		// n = 12

cifra = n % 10; // cifra je 2

n = n / 10;		// n = 1

cifra = n % 10; // cifra = 1

n = n / 10;		// n = 0
*/

/*while ( n != 0 ) {
	cifra = n % 10;

	printf("%d\n", cifra);

	n = n / 10;
}*/

/*int proizvod = 1;
int broj;

while (1) {
	printf("Unesite broj: ");
	scanf("%d", &broj);

	if (broj == 0) {
		break;
	}

	proizvod = proizvod * broj;
}

printf("\nProizvod unetih brojeva je: %d", proizvod);*/

/*for (int i = 0; i <= 10; i++) {

	if (i == 3) {
		continue;
	}

	printf("%d ", i);

}*/

/*int n;
int brojac = 0;
printf("Unesite broj: ");
scanf("%d", &n);

while (n != 0) {
	brojac++;
	n = n / 10;
}

printf("Broj ima %d cifara", brojac);*/



	/*int n;
	int brojac = 0;
	int suma = 0;
	int cifra;
	float aritmeticka;
	printf("Unesite broj: ");
	scanf("%d", &n);

	while (n != 0) {
		cifra = n % 10;

		suma = suma + cifra;
		brojac++;

		n = n / 10;
	}

	aritmeticka = (float)suma / brojac;

	printf("Aritmeticka sredina cifara je: %.2f", aritmeticka);*/

	printf("\n\n");
	system("pause");
	return 0;
}
