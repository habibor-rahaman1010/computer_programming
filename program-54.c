// print 1 to 100;

#include <stdio.h>

int main() {
    int i = 1, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(; ;){
        printf("%d \n", i);
        i++;
        if(i > n){
            break;
        }
    }


return 0;
}
