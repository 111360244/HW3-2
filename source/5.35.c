#include <stdio.h>
#include <stdlib.h>

unsigned long long int fibonacci(unsigned int a)
{
	if (a == 1 || a == 2)
		return 1;
	else if (a >= 3)
		return fibonacci(a - 1) + fibonacci(a - 2);

}
int main(void)
{
	int a;
	printf("請輸入n項:");
	scanf("%d", &a);
	printf("最大項:%d",fibonacci(a));
}