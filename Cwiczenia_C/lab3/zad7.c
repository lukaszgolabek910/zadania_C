#include <stdio.h>
//Zadanie 7 
int main()
{
	int tab[3][3] = { 1,2,3,1,2,3,1,2,3 };
	int suma = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == j) {
				suma += tab[i][j];
			}
		}
	}

	printf("Suma wartosci przekatnych jest rowna: ");
	printf("%d", suma);


	return 0;
}