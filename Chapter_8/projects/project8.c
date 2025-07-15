#include <stdio.h>


int main(void)
{
    // Array input
    int array[5][5] = {0};
    for (int i = 0; i < 5; i++) {
        printf("Enter grades for student no %d: ", i+1);
        for (int y = 0; y < 5; y++) {
            scanf("%d", &array[i][y]);
        }
    }
    
    // Total and average
    for (int i = 0; i < 5; i++) {
        printf("Totals for student no %d: ", i+1);
        int total = 0;
        for (int y = 0; y < 5; y++) {
            total += array[i][y];
        }
        printf("%d - average: %d\n", total, total / 5);
    }
    
    // Total of each quizz top and min scores
    for (int i = 0; i < 5; i++) {
        printf("Quizz no %d: ", i+1);
        int total = 0;
        int min = array[i][0];
        int max = array[i][0];
        for (int y = 0; y < 5; y++) {
            if (min > array[y][i])
                min = array[y][i];
            if (max < array[y][i])
                max = array[y][i];

            total += array[y][i];
        }
        printf("Average: %d - Max score: %d - Min score: %d\n", total / 5, max, min);
    }

    return 0;
}
