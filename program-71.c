// x + y  = n and x - y = n how will be x and y? in c program....

#include <stdio.h>

int main() {
    double x, y, x_plus_y, x_minus_y;
    printf("Enter the value of (x + y) and (x -y): ");
    scanf("%lf %lf", &x_plus_y, &x_minus_y);

    x = (x_plus_y + x_minus_y) / 2;
    y = (x_plus_y - x_minus_y) / 2;

    printf("X is: %0.2lf \n", x);
    printf("y is: %0.2lf \n", y);

return 0;
}
