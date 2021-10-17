#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int broj1;

	printf("Unesite broj: ");
	scanf("%d", &broj1);

	
	/*if (broj1 > 0) {
		printf("Broj je pozitivan");
	}
	else if (broj1 < 0) {
		printf("Broj je negativan");
	}
	else if (broj1 == 0) {
		printf("Broj je nula");
	}*/
	



	
	/*if (broj1 % 2 == 0) {
		printf("Broj je paran");
	}
	else {
		printf("Broj je neparan");
	}*/
	



	//
	//if (broj1 >= 100 && broj1 < 1000) {      // && logicko i     tacno samo ako su oba tacna
	//	printf("Broj je trocifren");
	//}
	//else {
	//	printf("Broj nije trocifren");
	//}
	



	
	if (broj1 < 100 || broj1 > 999) {    // || logicko ili    tacno ako je makar jedan tacan
		printf("Broj nije trocifren");
	}
	else {
		printf("Broj je trocifren");
	}
	




	/*
	if ( !(broj1 >= 100 && broj1 < 1000) ) {     // ! negacija,    !=  nije jednako
		printf("Broj nije trocifren");
	}
	else {
		printf("Broj je trocifren");
	}
	*/


	int dan = 1;

	switch (dan){
	case 1: 
		printf("Ponedeljak");
		break;

	default:
		break;
	}


	printf("\n\n");
	system("pause");
	return 0;
}
