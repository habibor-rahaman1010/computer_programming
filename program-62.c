// odd even count in c program....

#include <stdio.h>

int main() {
    int i, odd = 0, even = 0;
    int arr[10] = {12, 11, 23, 25, 26, 68, 98, 50, 59, 68};

    for(i = 0; i < 10; i++){
        if(arr[i] % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }

    printf("Even exist is: %d \n", even);
    printf("Even exist is: %d \n", odd);
return 0;
}
