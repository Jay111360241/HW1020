#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int i, j, l, b;
	printf("Enter the length and the breadth:");
	scanf_s("%d%d", &l, &b);
	for (i = 1; i <= l; i++)
	{
		for (j = 1; j <= b; j++)
		{
			if (i == 1 || i == l || j == 1 || j == b)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}