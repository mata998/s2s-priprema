#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int a = 10, b = 3;
	int c;


	c = a + b;
	printf("\nc = %d", c);

	c = a * b;
	printf("\nc = %d", c);

	float decimalni;

	decimalni = (float)a / b;
	printf("\nc = %f", decimalni);

	/*
	++a povecava vrednost u promenljivoj *a* ODMAH
	a++ u tom redu gde je pozvano ovo, *a* ima staru vrednost, a povecava se posle ; tj posle tog reda
	*/

	printf("\n\na = %d", a++);
	printf("\na = %d", a);

	float dec = 5.3;

	printf("\n\nZaokruzivanje na manje dec = %f", floor(dec));
	printf("\n\nZaokruzivanje na vece dec = %f", ceil(dec));

	printf("\n\ndec = %f", dec);

	int broj1 = 2, broj2 = 3;
	int rez;

	rez = pow(broj1, broj2);

	printf("\n\nrez = %d", rez);


	a = 10;
	b = 3;

	c = a % b;  // ostatak pri deljenju, ako je jednak 0 onda je broj a deljiv brojem b
	printf("\n\nc = %d", c);


	printf("\n\n");
	system("pause");
	return 0;
}
