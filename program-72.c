// 4x + 5y = n and 5x + 6y = n  how will be x and y? in c program...

#include <stdio.h>

int main() {
    double a1, a2, b1, b2, c1, c2, x, y;

    printf("Enter the vale of a1: ");
    scanf("%lf", &a1);

    printf("Enter the vale of a2: ");
    scanf("%lf", &a2);

    printf("Enter the vale of b1: ");
    scanf("%lf", &b1);

    printf("Enter the vale of b2: ");
    scanf("%lf", &b2);

    printf("Enter the vale of c1: ");
    scanf("%lf", &c1);

    printf("Enter the vale of c2: ");
    scanf("%lf", &c2);

    x = (b2 * c1 - b1 * c2) / (a1 * b2 - a2 * b1);
    printf("X is: %0.2lf \n", x);

    y = (a1 * c2 - a2 * c1) / (a1 * b2 - a2 * b1);
    printf("Y is: %0.2lf \n", y);


return 0;
}
