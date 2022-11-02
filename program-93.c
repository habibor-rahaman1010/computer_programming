//array print descending order in c program...

#include <stdio.h>

int main() {
    int i, ara[10] = {34, 56, 76, 78, 90, 98, 45, 43, 76, 60}, element;

    for(i = 9; i >= 0; i--){
        element = ara[i];
        printf("%d ", element);
    }

return 0;
}
