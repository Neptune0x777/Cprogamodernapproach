#include <stdio.h>

int main(void) {
    
    char chess_board[8][8] = {0};

    for (int i = 0; i < 8; i++) {
        for (int y = 0; y < 8; y++) {
            chess_board[i][y] = (i+y) % 2 == 0 ? 'B' : 'R';
        }
    }

    for (int i = 0; i < 8; i++) {
        for (int y = 0; y < 8; y++) {
            printf("%c", chess_board[i][y]);
            printf("%c", y == 7 ? '\n' : ' ');
        }
    }

    return 0;
}
