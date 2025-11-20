#include <stdio.h>

int main()
{
	int i = 0;
	int a = 0, b = 0;
	int remain = 0;
	scanf("%d %d", &a, &b);

	if (a < b)
	{
		for (i = a; i < b; i++)
		{
			if (b % i == 0)
			{
				remain = i;
			}
		}
	}
	else
	{
		for (i = b; i < a; i++)
		{
			if (a % i == 0)
			{
				remain = i;
			}
		}
	}
	printf("%d %d\n%d, a, b, remain");
}



// Tips:  Run for check input format