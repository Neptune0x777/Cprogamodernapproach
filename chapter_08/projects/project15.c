#include <stdio.h>

#define N 50
int main(void) {
    
    char ch;
    char array[N] = {0};
    int shift = 0;

    printf("Enter message to be encrypted: ");
    for (int i = 0; i < 50; i++) {
        if ((ch = getchar()) == '\n') {
            break;
        }
        array[i] = ch;
    }
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);


    printf("Encrypted message: ");
    for (int i = 0; i < 50; i++) {
        ch = array[i];
        if (array[i] == '\0') {
            break;
        }
        if (ch >= 'a' && ch <= 'z') {
            ch = ((ch - 'a') + shift) % 26 + 'a';
        } else if (ch >= 'A' && ch <= 'Z') {
            ch = ((ch - 'A') + shift) % 26 + 'A';
        }
        putchar(ch);
    }
    putchar('\n');
    return 0;
}
