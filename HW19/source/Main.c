#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float i, p, r;
	int d;
	printf("Enter loan principal(-1 to end):");
	scanf_s("%f", &p);
	if (p != -1)
	{
		printf("Enter interest rate:");
		scanf_s("%f", &r);
		printf("Enter term of the loan in days:");
		scanf_s("%d", &d);
		printf("The interest charge is %.2f\n", p*r*d / 365);
	}
	system("pause");
	return 0;
}