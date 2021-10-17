#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int a = 5;

	printf("a = %d       &a = %p\n", a, &a);

	int* pok;

	pok = &a;

	printf("*pok = %d   pok = %p", *pok, pok);

	*pok = 10;


	printf("\n\n a = %d", a);


	printf("\n\n");
	system("pause");
	return 0;
}
