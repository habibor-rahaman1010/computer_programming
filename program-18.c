// simple calculation in c program...

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Please enter the value of (num1 and num2): ");
    scanf("%d %d", &num1, &num2);

    int sum = num1 + num2;
    int sub = num1 - num2;
    int mul = num1 * num2;
    int div = num1 / num2;

    printf("Summation of the %d + %d = %d \n", num1, num2, sum);
    printf("Subtraction of the %d + %d = %d \n", num1, num2, sub);
    printf("Multiplication of the %d + %d = %d \n", num1, num2, mul);
    printf("Divide of the %d + %d = %d \n", num1, num2, div);

return 0;
}
