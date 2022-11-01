// print 100 to 1;

#include <stdio.h>

int main() {
    int i = 100, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(; ;){
        printf("%d \n", i);
        i--;
        if(i < n){
            break;
        }
    }


return 0;
}


