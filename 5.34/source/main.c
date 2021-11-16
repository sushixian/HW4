#include<stdio.h>
#include<stdlib.h>

int power(int base, int exponent);

int main(void)
{
	int i, j;
	printf("輸入數字以及次方");
	scanf_s("%d%d", &i, &j);
	printf("結果:%d", power(i, j));
}
int power(int base, int exponent)
{
	int a = exponent;
	int b = base;
	for (a - 1; a > 0; a--)
	{
		b = b * base;
	}
	return b;
}