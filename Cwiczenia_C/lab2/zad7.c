#include <stdio.h>

//Zadanie 7

int main()
{
	//Przypadek 1
	int i, j;
	for (i = 0; i < 10; i++) 
	{
		for (j = 10; j > i; j--)
		printf("X");
		printf("\n");
	}

	printf("\n\n");
	//Przypadek 2 
	int k;
	for (i = 0; i < 10; i++)
	{
		for (k = 9; k > i; k--) 
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("X");
		}
		printf("\n");
	}

	printf("\n\n");
	//Przypadek 3 

	for (i = 0; i < 10; i++)
	{
		for (int k = 0; k < i; k++) 
		{
			printf(" ");
		}
		for (j = 10; j > i; j--)
		{
			printf("X");
		}
		printf("\n");
	}

	printf("\n\n");
	//Przypadek 4

	int i, j;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < i; j++) {
			printf(" ");
		}
		for (j = 10; j > i; j--) {
			printf("X");
		}
		printf("\n");
	}
	
return 0;
}