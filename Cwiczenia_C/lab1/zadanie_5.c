#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	float a,b;
	float wynik;
	char x;
	printf("Podaj pierwsza liczbe: \n");
	scanf("%f", &a);
	printf("Podaj druga liczbe: \n");
	scanf("%f", &b);
	printf("Podaj dzialanie ktore chcesz wykonac: \n");
	scanf("%s", &x);
	

	switch (x)
	{
	case '+': wynik = a + b;
		printf("Wynik dodawania to %f", wynik);
		break;
	case '-': wynik = a - b;
		printf("Wynik odejmowania %f", wynik);
		break;
	case '*': wynik = a * b;
		printf("Wynik mno¿enia to %f", wynik);
		break;
	case '/': 
		if (b == 0)
		{
			printf("Nie mozna dzielic przez 0");

		}
		else {
			wynik = a / b;
			printf("Wynik dzialania to %f", wynik);
		}
		break;
	}
	return 0;
}