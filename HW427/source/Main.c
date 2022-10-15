#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x=1, y=1, r;
	for (x = 1; x <= 500; x++)
	{
		for (y = 1; y <= 500; y++)
		{
			for (r = 1; r <= 500; r++)
			{
				if ((r * r == x * x + y * y) && (x <= y))
				{
					printf("x = %d\ty = %d\tr = %d\n", x, y, r);
				}
			}
		}
	}
	system("pause");
	return 0;
}