#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define N 10

void generate_random_walk(char walk[N][N]);
void print_array(char walk[N][N]);


int main(void)
{
    srand(time(NULL)); 
    char array[N][N];
    generate_random_walk(array);
    print_array(array);


    return 0;
}

void generate_random_walk(char array[N][N]) 
{
    // Init
    for (int i = 0; i < N; i++) {
        for (int y = 0; y < N; y++) {
            array[i][y] = '.';
        }
    }
    array[0][0] = 'A';

    int tries = 0;
    int x = 0, y = 0;
    char letter = 66;
    while (letter <= 'Z') {
        int direction_check[4] = {false};
        tries = 0;
        while (tries < 4) {
            int direction = rand() % 4;
            if (direction_check[direction]) {
                continue;
            }
            direction_check[direction] = true;
            switch (direction) {
                case 0: if (y - 1 < 0 || array[x][y-1] != '.') {
                    tries++; 
                    continue;
                } else {
                    y--;
                } 
                break;
                case 1: if (x - 1 < 0 || array[x-1][y] != '.') {
                    tries++; 
                    continue;
                } else {
                    x--;
                } 
                break;
                case 2: if (y + 1 >= N || array[x][y+1] != '.') {
                    tries++; 
                    continue;
                } else {
                    y++;
                } 
                break;
                case 3: if (x + 1 >= N || array[x+1][y] != '.') {
                    tries++; 
                    continue;
                } else {
                    x++;
                }
                break;
            }
            array[x][y] = letter++;
            break;
        }
        if (tries >= 4) {
            break;
        }
    }
}
void print_array(char array[N][N]) 
{
    // Output
    for (int i = 0; i < N; i++) {
        for (int y = 0; y < N; y++) {
            printf("%c ", array[i][y]);
        }
        printf("\n");
    }
}
