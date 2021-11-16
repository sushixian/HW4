#include<stdio.h>
#include<stdlib.h>

unsigned long long int fibonacci(unsigned int n);


int main(void)
{
	int number;
	printf("Which fibonacci number you want?");
	scanf_s("%d", &number);
	printf("%lld\n", fibonacci(number));
	printf("%llu", fibonacci(UINT_MAX));
}
unsigned long long int fibonacci(unsigned int n)
{
	unsigned int i = 0, j = 1, a;
	unsigned long long int ans;
	if (n == 1)
	{
		ans = i;
	}
	else if (n == 2)
	{
		ans = j;
	}
	else
	{
		for (a = 1; a <= n - 2; a++)
		{
			ans = i + j;
			i = j;
			j = ans;
			if (i > j)
			{
				break;
			}
		}
	}
	return ans;
}