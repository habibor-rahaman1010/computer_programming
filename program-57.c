// namta print in c program use for loop...

#include <stdio.h>

int main() {
    int i, n, m;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    i = 1;
    m = 0;
    for(; ;){
        m += n;
        printf("%d X %d = %d \n", n, i, m);
        i++;

        if(i > 10){
            break;
        }
    }

return 0;
}

