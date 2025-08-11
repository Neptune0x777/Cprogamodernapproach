#include <stdio.h>

int main(void)
{
    short counter = 0;
    char letter;
    printf("Enter a sentence: ");
    while ((letter = getchar()) != '\n') {
        switch (letter) {
            case 'a': case 'A': case 'e': case 'E': case 'i': case 'I':
            case 'o': case 'O': case 'u': case 'U':
                counter++;
                break;
        }
    }

    printf("Your sentence contains %hd vowels.\n", counter);

    return 0;
}
