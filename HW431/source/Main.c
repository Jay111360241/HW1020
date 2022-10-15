#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int i, j, a = 1, b;
	for (i = 1; i <= 5; i++)
	{
		for (j = i; j < 5; j++)
		{
			printf(" ");
		}
		for (b = 0; b < a; b++)
		{
			printf("*");
		}
		a = a + 2;
		printf("\n");
	}
	a = 7;
	for (i = 4; i >= 0; i--)
	{
		for (j = i; j <= 4; j++)
		{
			printf(" ");
		}
		for (b = 0; b < a; b++)
		{
			printf("*");
		}
		a = a - 2;
		printf("\n");
	}
	system("pause");
	return 0;
}