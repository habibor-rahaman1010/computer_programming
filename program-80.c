// Farenheit to Celsius in c program...

#include <stdio.h>

int main() {
    double celsius, farenheit;
    printf("Enter the temperature in farenheit: ");
    scanf("%lf", &farenheit);

    celsius = ((farenheit - 32) * 5) / 9;
    printf("%0.2lf \n", celsius);

return 0;
}

