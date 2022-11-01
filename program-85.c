// GCD and LCM find out in c program...

#include <stdio.h>

int main() {
    int a, b, t, x, gcd, lcm;
    printf("Enter value of (a and b): ");
    scanf("%d %d", &a, &b);

    int A = a, B = b;

    if(a == 0){
        gcd = a;
    }
    else if(b == 0){
        gcd = b;
    }
    else{
        while(b != 0){
            t = b;
            b = a % b;
            a = t;
        }
        gcd = a;
    }

    lcm = (A * B) / gcd;

    printf("GCD is: %d \n", gcd);
    printf("LCM is: %d \n", lcm);
    return 0;

return 0;
}

