// student marks calculate in c program...

#include <stdio.h>

int main() {
    int ft_marks[40] = {83, 86, 97, 95, 93, 95, 86, 52, 49, 41, 100, 47, 90, 59, 63, 86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 82, 82, 58, 69, 67, 53, 56, 71, 62},
    st_marks[40] = {86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 100, 90, 59, 63, 86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 82, 82, 58, 69, 67, 53, 56, 71, 62, 49},
    final_marks[40] = {87, 64, 91, 43, 89, 66, 58, 73, 99, 81, 100, 64, 55, 69, 85, 81, 80, 67, 88, 71, 62, 78, 58, 66, 98, 75, 86, 90, 80, 85, 100, 64, 55, 69, 85, 81, 80, 67, 88, 71};

    int i;
    double total_marks[40];

    for(i = 0; i < 40; i++){
        int first = ft_marks[i];
        int second = st_marks[i];
        int third = final_marks[i];

        total_marks[i] = first / 4.0 + second / 4.0 + third / 2.0;
    }

    //total_marks array copy to in newTotalMarks array...
    int newTotalMarks[40], j;
    int repetent_marks[101];

    //initial value set 0 in newTotalArray...
    for(i = 0; i < 101; i++){
        repetent_marks[i] = 0;
    }

    //initial value set 0 in newTotalArray...
    for(i = 0; i < 40; i++){
        newTotalMarks[i] = 0;
    }

    //total_marks copy to in newTotalmarks....
    for(i = 0, j = 0; i < 40; i++, j++){
        newTotalMarks[j] = total_marks[i];
    }

    for(i = 0; i < 40; i++){
        repetent_marks[newTotalMarks[i]]++;
    }

    // output show repetend value in total marks...
    for(i = 50; i <= 100; i++){
        if(repetent_marks[i] > 0){
            printf("Final Marks: %d and this marks %d times repetend. \n", i, repetent_marks[i]);
        }
    }

return 0;
}

