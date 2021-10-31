#include <stdio.h>

int main(void) 
{
	int a = 1, b = 3, c = 5;
	int max;
	if (a == b){
		if (a == c)
		{
			max = c;
		}
		else
		{
			if (c > a)
			{
				max = c;
			}
			else
			{
				max = a;
			}
		}
	}
	else
	{
		if (a > b)
		{
			if (a == c)
			{
				max = c;
			}
			else
			{
				if (c > a)
				{
					max = c;
				}
				else
				{
					max = a;
				}
			}
		}
		else
		{
			if (b == c)
			{
				max = c;
			}
			else
			{
				if (c > b)
				{
					max = c;
				}
				else
				{
					max = b;
				}
			}
		}
	}
	printf("nejvetsi cislo je %d\n", max);
}