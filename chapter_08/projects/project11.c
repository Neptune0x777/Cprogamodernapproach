#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char letter;
    char phrase[15] = {0};
    int counter = 0;
    printf("Enter phone number: ");

    while ((letter = getchar()) != '\n' && counter < 15) {
        letter = toupper(letter);

        switch (letter) {
            case 'A': case 'B': case 'C':
                phrase[counter]= '2';
                break;
            case 'D': case 'E': case 'F':
                phrase[counter] = '3';
                break;
            case 'G': case 'H': case 'I':
                phrase[counter] = '4';
                break;
            case 'J': case 'K': case 'L':
                phrase[counter] = '5';
                break;
            case 'M': case 'N': case 'O':
                phrase[counter] = '6';
                break;
            case 'P': case 'R': case 'S':
                phrase[counter] = '7';
                break;
            case 'T': case 'U': case 'V':
                phrase[counter] = '8';
                break;
            case 'W': case 'X': case 'Y':
                phrase[counter] = '9';
                break;
            default:
                phrase[counter] = letter;
                break;
        }
        counter++;
    }
    printf("Resultat: %s\n", phrase);

    return 0;
}
