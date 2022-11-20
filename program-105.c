//global variable in c program...

#include <stdio.h>

double pi = 3.14;

void myFunc() {
    pi = 3.1416;
}

int main() {
    printf("%lf \n", pi);
    myFunc();
    printf("%lf \n", pi);
return 0;
}
