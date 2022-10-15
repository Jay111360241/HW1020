#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int y;
	float r;
	for (y = 1; y <= 15; y++)
	{
		r = 10 + 0.5 * y;
		printf("%d year(s) interest rate is %.2f%%.\n", y, r);
	}
	system("pause");
	return 0;
}