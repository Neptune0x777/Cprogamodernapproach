#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char letter;

    printf("Enter phone number: ");

    while ((letter = getchar()) != '\n') {
        letter = toupper(letter);

        switch (letter) {
            case 'A': case 'B': case 'C':
                printf("%d", 2);
                break;
            case 'D': case 'E': case 'F':
                printf("%d", 3);
                break;
            case 'G': case 'H': case 'I':
                printf("%d", 4);
                break;
            case 'J': case 'K': case 'L':
                printf("%d", 5);
                break;
            case 'M': case 'N': case 'O':
                printf("%d", 6);
                break;
            case 'P': case 'R': case 'S':
                printf("%d", 7);
                break;
            case 'T': case 'U': case 'V':
                printf("%d", 8);
                break;
            case 'W': case 'X': case 'Y':
                printf("%d", 9);
                break;
            default:
                printf("%c", letter);
                break;
        }
    }
    printf("\n");
    return 0;
}
