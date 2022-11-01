#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char b;
	printf("請輸入一個大小寫英文字母:");
	scanf("%c", &b);
	if (b >= 'A' && b<= 'Z')
	{
		b = b + 32;
		printf("%c", b);
	}
	else if (b>='a' && b<='z')
	{
		b = b - 32;
		printf("%c", b);
	}
		
}