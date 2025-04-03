#include <stdio.h>

int main(void) {
    
    char first_l, last_l;

    printf("Enter a name and last name: ");
    while ((first_l = getchar()) == ' ') ; 
    while (getchar() != ' ') ;
    while ((last_l = getchar()) == ' ') ;

    do 
        printf("%c", last_l);
    while ((last_l = getchar()) != '\n');

    printf(", %c\n", first_l);

    return 0;
}
