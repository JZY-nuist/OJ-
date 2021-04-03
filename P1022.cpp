#include<stdio.h>
int main()
{
	int temp, i, j, n;
	int days[8][12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	while (scanf("%d", &n) != EOF)
	{
		temp = 1;
		if (n <= 21)
			printf("2007-10-%d\n", n + 10);
		else if (n <= 51)
		{
			n -= 21;
			printf("2007-11-%02d\n", n);
		}
		else if (n <= 82)
		{
			n -= 51;
			printf("2007-12-%02d\n", n);
		}
		else
		{
			n -= 82;
			for (i = 0;i < 8;i++)
			{
				for (j = 0;j < 12;j++)
				{
					n -= days[i][j];
					if (n <= 0)
					{
						temp = 0;
						break;
					}		
				}
				if (temp == 0)
					break;
			}
			n += days[i][j];
			i += 2008;
			j += 1;
			printf("%d-%02d-%02d\n", i, j, n);
		}
	}
	return 0;
}
