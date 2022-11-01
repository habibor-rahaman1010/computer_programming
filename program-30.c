//check latter is capital or not in c program....

#include <stdio.h>

int main() {
    char ch;
    printf("Enter the value of: ");
    scanf("%c", &ch);

    if(ch >= 'a' && ch <= 'z'){
        printf("%c is lower case! \n", ch);
    }
    else if(ch >= 'A' && ch <= 'Z'){
        printf("%c is upper case! \n", ch);
    }
    else{
        printf("%c is unknown character", ch);
    }

return 0;
}
