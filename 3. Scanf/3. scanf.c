#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
	int broj1, broj2;

	printf("Unesite 2 broja: ");
	scanf("%d %d", &broj1, &broj2); // OBAVEZNO & pre imena promenljive

	printf("Uneli ste: %d %d", broj1, broj2);
	*/

	int poluprecnik;
	float povrsina, obim;

	printf("Unesite poluprecnik: ");
	scanf("%d", &poluprecnik);

	povrsina = poluprecnik * poluprecnik * 3.14;
	obim = 2 * poluprecnik * 3.14;

	printf("\nPovrsina kruga je: %f", povrsina);
	printf("\nObim kruga je: %f", obim);




	printf("\n\n");
	system("pause");
	return 0;
}
