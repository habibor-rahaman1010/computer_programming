// array in c program...

#include <stdio.h>

int main() {
    int ara[5] = {34, 54, 67, 78, 87};

    int a = ara[0];
    int b = ara[1];
    int c = ara[2];
    int d = ara[3];
    int e = ara[4];

    printf("%d %d %d %d %d \n", a, b, c, d, e);

    int n = ara[10];
    printf("%d \n", n);

    int x = ara[2 + 1];
    printf("%d \n", x);

    int y = ara[10 - 6];
    printf("%d \n", y);

    int t = ara[10 % 2];
    printf("%d \n", t);

    int z = ara[6 / 2];
    printf("%d \n", z);

    int r = ara[2 * 1];
    printf("%d \n", r);

return 0;
}


