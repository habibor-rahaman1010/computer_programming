// namta print in c program use while loop input from user...

#include <stdio.h>

int main() {
    int i, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    i = 1;
    while(i <= 10){
        printf("%d X %d = %d \n", n, i, (n * i));
        i++;
    }

return 0;
}

