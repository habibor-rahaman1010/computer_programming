// n numbers integer odd number summation in c program...

#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 0; i <= n; i++){
        if(i % 2 != 0){
            sum += i;
        }
    }
    printf("Total sum is: %d \n", sum);

return 0;
}
