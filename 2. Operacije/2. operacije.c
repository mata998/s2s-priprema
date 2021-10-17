#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int a = 10, b = 3;
	int c;


	c = a + b;
	printf("\nc = %d", c);

	c = c + a;
	//c += a;
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

	

	a = 10;
	b = 3;

	c = a % b;  // ostatak pri deljenju, ako je jednak 0 onda je broj a deljiv brojem b
	printf("\n\nc = %d", c);


	printf("\n\n");
}
