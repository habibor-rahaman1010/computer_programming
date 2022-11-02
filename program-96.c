// student marks calculate in c program...

#include <stdio.h>

int main() {
    int ft_marks[40] = {83, 86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90, 59, 63, 86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 82, 82, 58, 69, 67, 53, 56, 71, 62},
    st_marks[40] = {86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90, 59, 63, 86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 82, 82, 58, 69, 67, 53, 56, 71, 62, 49},
    final_marks[40] = {87, 64, 91, 43, 89, 66, 58, 73, 99, 81, 100, 64, 55, 69, 85, 81, 80, 67, 88, 71, 62, 78, 58, 66, 98, 75, 86, 90, 80, 85, 100, 64, 55, 69, 85, 81, 80, 67, 88, 71};

    int i;
    double total_marks[40];

    for(i = 0; i < 40; i++){
        int first = ft_marks[i];
        int second = st_marks[i];
        int third = final_marks[i];

        total_marks[i] = first / 4.0 + second / 4.0 + third / 2.0;
    }

    // Output all student final marks...
    for(i = 0; i < 40; i++){
        int indivisial_marks = total_marks[i];
        printf("Roll No: %d Total Marks is: %d \n", (i + 1), indivisial_marks);
    }

return 0;
}
