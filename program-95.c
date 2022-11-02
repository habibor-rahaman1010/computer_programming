// array print descending order in c program...

#include <stdio.h>

int main() {
    int ara[10] = {34, 56, 76, 78, 90, 98, 45, 43, 76, 60};
    int i, j, tamp;

    for(i = 0, j = 9; i < 10; i++, j--){
        tamp = ara[j];
        ara[j] = ara[i];
        ara[i] = tamp;
        printf("%d ", ara[i]);

        for(i = 0; i < 10; i++){
            int element = ara[i];
            printf("%d ", element);
        }
    }

return 0;
}

