#include<stdio.h>
#include<stdlib.h>

int lcm(int a1, int a2);

int main(void)
{
	int num1, num2;
	printf("Enter two number:");
	scanf_s("%d%d", &num1, &num2);
	printf("Their LCM is:%d", lcm(num1, num2));
}
int lcm(int a1, int a2)
{
	int i = 1;
	while ((i%a1 != 0) || (i%a2 != 0))
	{
		i = i + 1;
	}
	return i;
}