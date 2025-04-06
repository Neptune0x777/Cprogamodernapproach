#include <stdio.h>
#include <stdbool.h>

int main(void) {
    
    float average = 0.0f;
    int words_cntr = 0, letters_cntr = 0;
    char ch;
    bool word = false;

    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n') {
        if (ch != ' ') {
            letters_cntr++;
            if (!word) {
                words_cntr++;
                word = true;
            } 
        } else {
            word = false;
        }
    }
    average = (float) letters_cntr / words_cntr;
    printf("Average word length: %.1f\n", average);
    return 0;
}
