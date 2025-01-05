#include <stdio.h>
#include <string.h>

//Zadanie 4 

int main()
{
	char tekst[1000];
	printf("Podaj tekst do zamiany: \n");
	fgets(tekst, sizeof(tekst), stdin);


	
	for (int i = 0; tekst[i] != '\0'; i++)
	{
		if (tekst[i] >= 'a' && tekst[i] <= 'z')
		{
			printf("%c", tekst[i] - ('a' - 'A'));
		}
		else {
			printf("%c", tekst[i]);
		}
	}
	return 0;
}