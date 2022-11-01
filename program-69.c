//permutation in c program...

#include <stdio.h>

int main() {
    int x, y, z, n;

    for(x = 1; x <= 4; x++){
        for(y = 1; y <= 4; y++){
            for(z = 1; z <= 3; z++){
                for(n = 1; n <= 4; n++){
                    if(x != y && x != z && x != n && y != z && y != n && z != n){
                        printf("%d %d %d %d \n", x, y, z, n);
                    }
                }
            }
        }
    }

return 0;
}


