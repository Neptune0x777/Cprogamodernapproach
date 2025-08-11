#include <stdio.h>


int main(void)
{
    // Array input
    int array[5][5] = {0};
    for (int i = 0; i < 5; i++) {
        printf("Enter row %d: ", i+1);
        for (int y = 0; y < 5; y++) {
            scanf("%d", &array[i][y]);
        }
    }
    
    // Row calc
    printf("Row totals: ");
    for (int i = 0; i < 5; i++) {
        int row = 0;
        for (int y = 0; y < 5; y++) {
            row += array[i][y];
        }
        printf("%d ", row);
    }
    
    // Col calc
    printf("\ncolumn totals: ");
    for (int i = 0; i < 5; i++) {
        int col = 0;
        for (int y = 0; y < 5; y++) {
            col += array[y][i];
        }
        printf("%d ", col);
    }
    printf("\n");
    
    return 0;
}
