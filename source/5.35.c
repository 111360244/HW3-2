#include <stdio.h>
#include <stdlib.h>

unsigned long long int fibonacci(unsigned int b)
{
	if (b == 0)
		return 0;
	if (b == 1 )
		return 1;
	else if (b >= 2)
		return fibonacci(b - 1) + fibonacci(b - 2);

}
int main(void)
{
	int a,b;
	printf("請輸入n項:");
	scanf("%d", &a);
	a = a - 1;
	for(b=0;b<=a;b++)
		printf("%d", fibonacci(b));
	printf("最大項:%d",fibonacci(a));
}