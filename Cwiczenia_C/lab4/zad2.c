#include <stdio.h>
#include <string.h>

//Zadanie 2 


int main()
{
	char znak;

	for (znak = 'a'; znak <= 'z'; znak++ )
	{
		printf("%c: %d\n\t", znak, znak);
	}

	for (znak = 'A'; znak <= 'Z'; znak++)
	{
		printf("%c: %d\n\t", znak, znak);
	}

	for (znak = '0'; znak <= '9'; znak++)
	{
		printf("%c: %d\n\t", znak, znak);
	}
	return 0;
}