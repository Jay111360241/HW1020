#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float m, h, c, p, t, s;
	int i;
	printf("Input the code:");
	scanf_s("%d", &i);
	switch (i)
	{
	case 1:
	{
		printf("How much the weekly pay is?:");
		scanf_s("%f", &s);
		printf("Your weekly salary is %.1f", s);
		break;
	}
	case 2:
	{
		printf("How long do you work?(hours):");
		scanf_s("%f", &t);
		printf("How much the hourly pay is?:");
		scanf_s("%f", &s);
		if (t > 40)
		{
			printf("Your weekly salary is %.1f.", t * 40 * s + (t - 40) * 1.5 * s);
		}
		else
		{
			printf("Your weekly salary is %.1f.", t * s);
		}
		break;
	}
	case 3:
	{
		printf("How much the weekly sales is?:");
		scanf_s("%f", &s);
		printf("Your weekly salary is %.1f.", 250 + 0.057 * s);
		break;
	}
	case 4:
	{
		printf("How many items?:");
		scanf_s("%f", &t);
		printf("How much the each item pay?:");
		scanf_s("%f", &s);
		printf("Your weekly salary is %.1f.", t * s);
		break;
	}
	default:
		printf("No this code");
		break;
	}
	system("pause");
	return 0;
}