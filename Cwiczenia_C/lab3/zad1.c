#include <stdio.h>
#include <string.h>
//Zadanie 1 

#define ROZMIAR 10

int main()
{	
	int tab[ROZMIAR], x = 3;

	for (int i = 0; i < ROZMIAR; i++)
	{
		tab[i] = x;
		printf("%d \t", tab[i]);
		x += 3;
	}
	return 0;
}
