//student marks calculate in c program...

#include <stdio.h>

int main() {
    int ft_marks, st_marks, final_marks;
    double total_marks;

    ft_marks = 87;
    st_marks = 85;
    final_marks = 95;

    total_marks = ft_marks / 4.0 + st_marks / 4.0 + final_marks / 2.0;
    printf("Total marks is: %0.2lf \n", total_marks);

return 0;
}
