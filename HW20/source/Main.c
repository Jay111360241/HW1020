#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int h;
	float r, s;
	printf("Enter # of hours worked(-1 to end):");
	scanf_s("%d", &h);
	if (h != -1)
	{
		printf("Enter hourly rate of the worker ($00.00):");
		scanf_s("%f", &r);
		if (h >= 40)
		{
			s = r * 40 + r * 1.5*(h - 40);
			printf("Salary is %.2f", s);
		}
		else
		{
			s = r * h;
			printf("Salary is %.2f", s);
		}
	}
	system("pause");
	return 0;
}