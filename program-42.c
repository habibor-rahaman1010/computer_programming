// print even number use while loop in c program...

#include <stdio.h>

int main() {
    int n = 1;

    while(n <= 20){
         n++;

        if(n % 2 != 0){
            continue;
        }
        printf("%d \n", n);
    }

return 0;
}
