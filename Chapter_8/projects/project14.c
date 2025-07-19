#include <stdio.h>

#define N 50
int main(void) {
    
    char ch, last_ch;
    char phrase[N] = {0};
    int i;

    printf("Enter a sentence: ");
    for (i = 0; i < N; i++) {
        ch = getchar();
        if (ch == '.' || ch == '?' || ch == '!') {
            last_ch = ch;
            break;
        }
        phrase[i] = ch;
    }
    int start, end;
    printf("Reversal of sentence: ");
    for (end = i - 1; end >= 0; end--) {
        if (end == 0 || phrase[end - 1] == ' ') {
            start = end;
            while (phrase[start] != ' ' && phrase[start] != '\0') {
                putchar(phrase[start]);
                start++;
            }
            if (end != 0) {
                putchar(' ');
            }
        }
    }
    putchar(last_ch);
    putchar('\n');
    return 0;
}
