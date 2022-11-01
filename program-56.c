// namta print in c program use for loop...

#include <stdio.h>

int main() {
    int i, n, m;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    m = 0;
    for(i = 1; i <= 10; i++){
        m += n;
        printf("%d X %d = %d \n", n, i, m);
    }

return 0;
}
