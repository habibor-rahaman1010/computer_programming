//find out max element on an array in c program...

#include <stdio.h>

int find_max(int number[10]) {
    int max = number[0];
    int i;
    for(i = 0; i < 10; i++) {
        if(number[i] > max){
            max = number[i];
        }
    }
    return max;
}

int main() {
    int ara[10] = {21, 45, 43, 77, 100, 12, 23, 67, 89, 90};
    int result = find_max(ara);
    printf("Max item is: %d", result);

return 0;
}
