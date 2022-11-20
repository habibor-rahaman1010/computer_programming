//sum 2 real number in c program use function...

#include <stdio.h>

double add(double num1, double num2) {
    double sum = num1 + num2;
    return sum;
}

int main() {
    double a = 2.5, b = 5.7;
    double result = add(a, b);
    printf("%lf", result);

return 0;
}
