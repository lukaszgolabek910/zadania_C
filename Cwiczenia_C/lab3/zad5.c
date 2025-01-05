#include <stdio.h>
#include <string.h>
//Zadanie 5


int main()
{ 
	float tab[100];
	
	printf("Podaj pierwsza wartosc tablicy: \n");
	scanf_s("%f", &tab[0]);
	printf("\nPodaj druga wartosc tablicy: ");
	scanf_s("%f", &tab[1]);

			for (int i = 1; i < 9; i++)
		{
			float wartosc = tab[i] + tab[i - 1];

			tab[i + 1] = wartosc;

			
		}

	for (int i = 0; i < 10; i++)
	{
		printf("\t%f", tab[i]);
	}


return 0;
}