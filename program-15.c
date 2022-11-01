// input from use in c program....

#include <stdio.h>

int main() {
    double x, y;
    printf("Enter the value of (x and y): ");
    scanf("%lf %lf", &x, &y);

    double sum = x + y;
    printf("Summation is: %0.2lf", sum);

return 0;
}
