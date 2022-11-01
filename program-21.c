//check the number is positive or negative in c program...

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if(n >= 0){
        printf("%d is positive number! \n", n);
    }
    else{
        printf("%d is negative number! \n",n);
    }


return 0;
}
