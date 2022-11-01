// for loop in c program....

#include <stdio.h>

int main() {
    int i = 1, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(; ;){
        printf("%d X %d = %d \n", n, i, (n * i));
        i++;
        if(i > 10){
            break;
        }
    }


return 0;
}
