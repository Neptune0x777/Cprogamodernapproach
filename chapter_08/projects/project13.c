#include <stdio.h>

int main(void) {
    
    int i = 0;
    char first_l, ch;
    char last_name[21] = {0};

    printf("Enter a name and last name: ");
    while ((first_l = getchar()) == ' ') ; 
    while (getchar() != ' ') ;
    while ((ch = getchar()) == ' ') ;

    while (ch != '\n' && i < 20) {
        last_name[i++] = ch;
        ch = getchar();
    }
    

    printf("You entered the name: %s, %c.\n", last_name, first_l);

    return 0;
}
