//write a program which check the number is even or odd...

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if(n % 2 == 0){
        printf("%d the number is Even! \n", n);
    }
    else{
        printf("%d the number is Odd! \n", n);
    }


return 0;
}
