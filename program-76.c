// 1 + 2 + 3 + 4 + 5 +.....1000?

#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    sum = (n * (n + 1) / 2);
    printf("Series of sum is \n: %d", sum);

return 0;
}

