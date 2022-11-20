//array sum in c program...

#include <stdio.h>

int array_sum(int number[10]) {
    int sum = 0;
    int i;
    for(i = 0; i < 10; i++) {
        sum += number[i];
    }
    return sum;
}

int main() {
    int ara[10] = {21, 45, 43, 77, 100, 12, 23, 67, 89, 90};
    int result = array_sum(ara);
    printf("Sum is: %d", result);

return 0;
}
