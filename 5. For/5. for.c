#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {

	for (int i = 0; i < 5; i++) {
		printf("hello world\n");
	}

	for (int i = 0; i < 5; i++) {
		printf("%d\n", i);
	}


	for (int i = 0; i < 1000; i++) {
		if (i >= 100 && i <= 999) {
			printf("%d\n", i);
		}
	}



	int n;
	int faktorijel = 1;
	printf("Unesite broj: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		faktorijel = faktorijel * i;
	}

	printf("Faktorijel je: %d", faktorijel);



	for (int i = 1; i < 50; i++) {

		if (i % 3 == 0) {
			continue;
		}

		printf("%d ", i);
	}


	printf("\n\n");
}
