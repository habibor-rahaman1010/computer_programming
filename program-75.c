// 1 + 2 + 3 + 4 + 5 +.....1000?

#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        sum += i;
    }
    printf("Series of sum is: %d \n", sum);

return 0;
}
