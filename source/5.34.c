#include <stdio.h>
#include <stdlib.h>

int power(int a, int b)
{
	int c=1;
	while (b != 1)
	{
		c*= a;
		b--;
	}
	return c;
}
int main(void)
{
	int a, b;
	printf("�п�J�Y�ƪ�n����:");
	scanf("%d %d", &a, &b);
	printf("%d",power(a,b));
	return 0;
}