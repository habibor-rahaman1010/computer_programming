

#include <stdio.h>

int main() {
    int total_marks[40] = {
        85, 77, 93, 68, 91, 78, 63, 61, 72, 61, 100, 66, 64, 65, 79, 72, 61, 68, 81, 62,
        55, 67, 58, 55, 82, 70, 74, 77, 75, 83, 87, 73, 62, 66, 76, 70, 67, 65, 77, 63
    };

    int i;

    int marks_count[101];
    //as a initial value set 0 in marks_count array...
    for(i = 0; i < 101; i++){
        marks_count[i] = 0;
    }

    for(i = 0; i < 40; i++){
        int n = marks_count[total_marks[i]]++;
    }

    //output print here...
    for(i = 50; i < 101; i++){
        int count = marks_count[i];
        if(count > 0){
            printf("Final Marks: %d and this marks %d times repetend. \n", i, count);
        }
    }

return 0;
}
