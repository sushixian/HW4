#include<stdio.h>
#include<stdlib.h>

void Hol(int A, int from, int to, int ram);

int main(void)
{
	int A, from, to, ram;
	printf("Enter four number (A from to ram):");
	scanf_s("%d %d %d %d", &A, &from, &to, &ram);
	Hol(A, from, to, ram);
	system("pause");
	return 0;
}

void Hol(int A, int from, int to, int ram)
{
	if (A == 1)
	{
		printf("%c --> %c\n", from + 64, to + 64);
		return;
	}
	Hol(A - 1, from, ram, to);
	printf("%c --> %c\n", from + 64, to + 64);
	Hol(A - 1, ram, to, from);
}