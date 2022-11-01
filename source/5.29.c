#include <stdio.h> 
#include <stdlib.h> 

int gcd(int num1, int num2) {
    while (num2 != 0)
    {
        int r = num1 % num2;
        num1 = num2;
        num2 = r;
    }
    return num1;
}

int lcm(int num1, int num2) {
    return num1 * num2 / gcd(num1, num2);
}

int main(void) {
    int num1, num2;

    printf("請輸入兩數：");
    scanf("%d %d", &num1, &num2);
    printf("Lcm：%d\n", lcm(num1, num2));

    return 0;
}