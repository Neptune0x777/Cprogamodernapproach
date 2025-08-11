#include <stdio.h>

void create_magic_square(int n, int magic_square[n][n]);
void print_magic_square(int n, int magic_square[n][n]);

int main(void) {
    int number = 0;
    do {
        printf("The size must be an odd number between 1 and 99.\n");
        printf("Enter size of magic square: ");
        scanf("%d", &number);
    } while (number < 1 || number > 99 || number % 2 == 0);
    
    int array[number][number];
    for (int i = 0; i < number; i++) {
        for (int y = 0; y < number; y++) {
            array[i][y] = 0;
        }
    }

    create_magic_square(number, array);
    print_magic_square(number, array);

    return 0;
}

void create_magic_square(int number,int array[number][number])
{
    int row = 0;
    int col = number / 2;
    array[row][col] = 1;
    for (int i = 2; i <= number * number; i++) {
        int new_row = (row - 1 + number) % number;
        int new_col = (col + 1) % number;
        if (array[new_row][new_col] != 0) {
            row = (row + 1) % number;
        } else {
            row = new_row;
            col = new_col;
        }
        array[row][col] = i;
    }
}
void print_magic_square(int number, int array[number][number])
{
        for (int i = 0; i < number; i++) {
        for (int j = 0; j < number; j++) {
            printf("%4d", array[i][j]);
        }
        putchar('\n');
    }
}
