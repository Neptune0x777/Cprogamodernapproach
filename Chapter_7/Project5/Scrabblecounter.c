#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char letter;
    short sum = 0;
    printf("Enter a word: ");

    while ((letter = getchar()) != '\n') {
        letter = toupper(letter);

        switch (letter) {
            case 'D': case 'G':
                sum += 2;
                break;
            case 'B': case 'C': case 'M': case 'P':
                sum += 3;
                break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                sum += 4;
                break;
            case 'K':
                sum += 5;
                break;
            case 'J': case 'X':
                sum += 8;
                break;
            case 'Q': case 'Z':
                sum += 10;
                break;
            default:
                sum++;
                break;
        }
    }
    printf("Scrabble value: %d\n", sum);
    return 0;
}
