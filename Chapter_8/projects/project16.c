#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void) {

    int alpha[26] = {0};
    char ch;
    bool anagram = true;

    printf("Enter first word: ");
    for (int i = 0; i < 15; i++) {
        if ((ch = getchar()) == '\n') {
            break;
        }
        if (isalpha(ch)) {
            ch = tolower(ch);
            alpha[ch - 'a']++;
        }
    }
    
    printf("Enter second word: ");
    for (int i = 0; i < 15; i++) {
        if ((ch = getchar()) == '\n') {
            break;
        }
        if (isalpha(ch)) {
            ch = tolower(ch);
            alpha[ch - 'a']--;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (alpha[i] != 0) {
            anagram = false;
            break;
        }
    }
    printf("The words are%s anagrams\n", anagram ? "" : " not");
    return 0;
}
