// array is reference type, function in c program...

#include <stdio.h>

void test_function(int ara2[]) {
    ara2[0] = 100;
}

int main() {
    int ara[] = {1, 2, 3, 4, 5};

    printf("%d \n", ara[0]);

    test_function(ara);

    printf("%d \n", ara[0]);

return 0;
}
