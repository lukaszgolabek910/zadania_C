#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main() 
{
	int a;

	printf("Podaj liczba calkowita: \n");

	scanf_s("%d", &a);

	if (a % 2 == 0) {
		printf("\nLiczba a jest parzysta");
	}
	else {
		printf("\nLiczba a nie jest parzysta");
	}
	
	return 0;
}