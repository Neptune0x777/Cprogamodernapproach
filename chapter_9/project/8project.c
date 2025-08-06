#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int roll_dice(void);
bool play_game(void);

int main(void) {
    
    srand(time(NULL));
    int win = 0, lose = 0;
    char x;
    do {
        bool party = play_game();
        if (party)
            win++;
        else
            lose++;
        printf("Play again? ");
        scanf(" %c", &x);
    } while(x == 'Y' || x == 'y');
    printf("Wins: %d\tLosses: %d\n", win, lose);
    return 0;
}

int roll_dice(void) 
{
    int number_1 = (rand() % 6) + 1;
    int number_2 = (rand() % 6) + 1;
    return number_1 + number_2;
}
bool play_game(void) 
{
    int result = roll_dice(); 
    printf("You rolled: %d\n", result);
    if (result == 7 || result == 11) {
        printf("You win!\n");
        return true;
    } else if (result == 2 || result == 3 || result == 12) {
        printf("You lose!\n");
        return false;
    }
    int point = result;
    printf("Your point is %d\n", point);
    for (;;) {
        result = roll_dice();
        printf("You rolled: %d\n", result);
        if (result == point) {
            printf("You win!\n");
            return true;
        } else if (result == 7) {
            printf("You lose!\n");
            return false;
        }
    }
}
