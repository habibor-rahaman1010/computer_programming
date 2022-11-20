//find out min element on an array in c program...

#include <stdio.h>

int find_min(int number[10]) {
    int min = number[0];
    int i;
    for(i = 0; i < 10; i++) {
        if(number[i] < min){
            min = number[i];
        }
    }
    return min;
}

int main() {
    int ara[10] = {21, 45, 43, 77, 100, 12, 23, 67, 89, 90};
    int result = find_min(ara);
    printf("Min item is: %d", result);

return 0;
}

