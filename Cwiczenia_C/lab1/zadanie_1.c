#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int a = 123456;
	int b;


	printf("\nPodaj numer albumu: ");

	scanf_s("%d", &b);

	if (b > 999999)
	{
		printf("Nr albumu ma za ma³o lub za du¿o cyfr");
	}
	else if (b <= 999999) 
	{
		printf("numer albumu: %d ", b);
	}
		return 0;
}
