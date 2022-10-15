#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float i, j;
	printf("Enter sales in dollars (-1 to end):");
	scanf_s("%f", &i);
	if (i != -1)
	{
		j = i * 0.09 + 200;
		printf("Salary is %.2f\n", j);
	}
	system("pause");
	return 0;
}