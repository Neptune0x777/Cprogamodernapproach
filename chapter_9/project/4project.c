#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void) {

    int alpha[26] = {0};
    int alpha2[26] = {0};

    printf("Entre le premier mot: ");
    read_word(alpha);
    printf("Entre le second mot: ");
    read_word(alpha2);


    printf("The words are%s anagrams\n", equal_array(alpha, alpha2) ? "" : " not");
    return 0;
}

void read_word(int counts[26]) {
    char ch;
    for (int i = 0; i < 15; i++) {
        if ((ch = getchar()) == '\n') {
            break;
        }
        if (isalpha(ch)) {
            ch = tolower(ch);
            counts[ch - 'a']++;
        }
    }
}
bool equal_array(int counts1[26], int counts2[26])
{
    for (int i = 0; i < 26; i++) {
        if (counts1[i] != counts2[i]) {
            return false;
        }
    }
    return true;
}
