// simple calculation in c program...

#include <stdio.h>

int main() {
    int num1, num2;
    char sign;
    printf("Please enter the value of (num1 and num2): ");
    scanf("%d %d", &num1, &num2);

    int sum = num1 + num2;
    sign = '+';
    printf("Summation of the %d %c %d = %d \n", num1, sign, num2, sum);

    int sub = num1 - num2;
    sign = '-';
    printf("Subtraction of the %d %c %d = %d \n", num1, sign, num2, sub);

    int mul = num1 * num2;
    sign = '*';
    printf("Multiplication of the %d %c %d = %d \n", num1, sign, num2, mul);

    int div = num1 / num2;
    sign = '/';
    printf("Divide of the %d %c %d = %d \n", num1, sign, num2, div);

return 0;
}
