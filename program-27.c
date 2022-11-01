//write a program which check the number is even or odd...

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int remainer = n % 2;
    if(remainer == 0){
        printf("The number is: Even! \n");
    }
    else{
        printf("The number is: Odd! \n");
    }


return 0;
}
