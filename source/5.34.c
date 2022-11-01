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
	printf("請輸入某數的n次方:");
	scanf("%d %d", &a, &b);
	printf("%d",power(a,b));
	return 0;
}