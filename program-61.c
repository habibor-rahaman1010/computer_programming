// second largest number in c program...

#include <stdio.h>

int main() {
    int ara[5] = {34, 65, 35, 56, 70};
    int min1;
    int min2;

    if(ara[0] < ara[1]){
        min1 = ara[0];
        min2 = ara[1];
    }
    else{
        min1 = ara[1];
        min2 = ara[0];
    }

    for(int i = 0; i < 5; i++){
        if(ara[i] < min1){
            min2 = min1;
            min1 = ara[i];
        }
        else if(ara[i] < min2 && ara[i] > min1){
            min2 = ara[i];
        }
    }
    printf("%d", min2);


return 0;
}
