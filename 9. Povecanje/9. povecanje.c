#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void povecanje(int a) {

	a = a + 1;

	//printf("\n\nVrednost u funkciji a = %d", a);
}

void pravoPovecanje(int* pok) {

	*pok = *pok + 1;
	//		a =  a + 1
}

void zamena(int* a, int* b) {
	int c;

	c = *a;
	*a = *b;
	*b = c;

}

int main() {
	int a = 5;

	printf("Vrednost u mainu pre funkcije a = %d", a);

	povecanje(a);

	//pravoPovecanje(&a);

	printf("\n\nVrednost u mainu posle funkcije a = %d", a);
	

	/*int a = 5, b = 10;

	zamena(&a, &b);

	printf("a = %d   b = %d", a, b);*/




	printf("\n\n");
	system("pause");
	return 0;
}
