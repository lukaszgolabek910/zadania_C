#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	float a,b,c,d;
	
	float srednia;

	printf("Podaj pierwsza liczbe: \n");

	scanf_s("%f", &a);

	printf("Podaj druga liczbe: \n");

	scanf_s("%f", &b);

	printf("Podaj trzecia liczbe: \n");

	scanf_s("%f", &c);

	printf("Podaj czwarta liczbe: \n");

	scanf_s("%f", &d);

	
	
	srednia = (a + b + c + d) / 4;

	printf("%f", srednia);
}
