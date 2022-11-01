//GCD and LCM find out in c program...

#include <stdio.h>

int main() {
    int num1, num2, x, y, rem, gcd, lcm;
    printf("Enter the value of (x and y): ");
    scanf("%d %d", &x, &y);

    num1 = x;
    num2 = y;

    while(num2 != 0){
        rem = num1 % num2;
        num1 = num2;
        num2 = rem;
    }

    gcd = num1;
    printf("GCD is: %d \n", gcd);

    lcm = (x * y) / gcd;
    printf("LCM is: %d \n", lcm);

return 0;
}
