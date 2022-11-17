#include <stdio.h>
#include <stdlib.h>



int z(int a, int b)
{
	while (b != 0)
	{
		int x = a;
		a = b;
		b = x;
	}
	return a;


}
int main(void)
{
	int a, b, c;
	printf("please enter two number:");
	scanf("%d %d", &a, &b);
	c = a * b / z(a, b);
	printf("LCM is:%d\n", c);
	return 0;
}