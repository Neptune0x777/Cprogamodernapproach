#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char letter;
    short sum = 0;
    int scrabble_values[26] = {
        1, 3, 3, 2, 1, 4, 2, 4, 1, 8,
        5, 1, 3, 1, 1, 3,10, 1, 1, 1,
        1, 4, 4, 8, 4,10
    };
    printf("Enter a word: ");

    while ((letter = getchar()) != '\n') {
        letter = toupper(letter);
        if (letter < 'A' || letter > 'Z') {
            continue;
        }
        sum += scrabble_values[letter - 'A'];
    }
    printf("Scrabble value: %d\n", sum);
    return 0;
}
