#include<stdio.h>
#include<stdlib.h>

int change(char a);

int main(void)
{
	char letter;
	printf("Enter a letter:");
	scanf_s("%c", &letter);
	printf("New letter is: %c", change(letter));
}

int change(char a)
{
	if (a >= 97)
		return (a - 32);
	else
		return (a + 32);
}