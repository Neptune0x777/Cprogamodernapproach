#include <stdio.h>
#include <ctype.h>

#define N 50

int main(void)
{
    int ch = 0, i;
    char array[N] = {0};
    printf("Phrase: ");
    for (i = 0; i < N-1 && (ch = getchar()) != '\n' && ch != EOF; i++) {
        ch = toupper((unsigned char) ch);
        array[i] = (char) ch;

        switch (array[i]) {
            case 'A': array[i] = '4'; break;
            case 'B': array[i] = '8'; break;
            case 'E': array[i] = '3'; break;
            case 'I': array[i] = '1'; break;
            case 'O': array[i] = '0'; break;
            case 'S': array[i] = '5'; break;
            default: break;
        }
    }
    if (i + 10 < N - 1) {
        for (int y = 0; y < 10; y++) {
            array[i++] = '!';
        }
    }
    printf("%s\n", array);
    return 0;
}
