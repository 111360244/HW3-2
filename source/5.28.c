#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char b;
	printf("�п�J�@�Ӥj�p�g�^��r��:");
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