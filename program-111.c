// area of a circle in c program...

#include<stdio.h>
int main() {
    float r, Area,  Perimeter;
    printf("Enter the radius of circle: ");
    scanf("%f", &r);

    Area = (3.14 * r * r);
    Perimeter = (2 * 3.14 * r);

    printf("Aria of the circle is: %0.2f \n", Area);
    printf("perimeter of the circle is: %0.2f \n", Perimeter);
    return 0;
}
