// array print descending order in c program...

#include <stdio.h>

int main() {
    int i, j, ara2[10], ara1[10] = {34, 56, 76, 78, 90, 98, 45, 43, 76, 60};

    for(i = 0, j = 9; i < 10; i++, j--){
        ara2[j] = ara1[i];
    }

    for(i = 0; i < 10; i++){
        ara1[i] = ara2[i];
    }

    for(i = 0; i < 10; i++){
        int element = ara1[i];
        printf("%d ", element);
    }

return 0;
}
