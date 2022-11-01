// Celsius to Farenheit in c program...

#include <stdio.h>

int main() {
    double celsius, farenheit;
    printf("Enter the temperature in celsius: ");
    scanf("%lf", &celsius);

    farenheit = 1.8 * celsius + 32;
    printf("%0.2lf \n", farenheit);

return 0;
}
