// or operator use in c program....

#include <stdio.h>

int main() {
    int num;
    printf("Enter the value of num: ");
    scanf("%d", &num);

    if(num >= 1 || num <= 100){
        printf("Yes! \n");
    }
    else{
        printf("No! \n");
    }

return 0;
}
