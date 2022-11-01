//print namta in c program use nested loop...

#include <stdio.h>

int main() {
    int i, j, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int m = 0;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= 10; j++){
            m = n + j;
            printf("%d X %d = %d \n", i, j, m);
        }
        printf("\n");
    }


return 0;
}

