#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

int main(void) {
    
    int i, n;
    bool overflow = false;

    printf("Entrez un nombre: ");
    scanf("%d", &n);
    getchar();  // Absorb the \n leave by scanf behind him.


    for (i = 1; i <= n; i++) {
        if (i % 24 == 0) {
            printf("Press Enter to continue...\n");
            while (getchar() != '\n') ;
        }
        printf("%d\t%d\n", i, i * i);

        if ((long) i * i > INT_MAX) {
            overflow = true;
            break;
        }
    }
    if (overflow)
        printf("Overflow when i = %d\n", i);
    printf("Int type uses %u bits on that computer\n", 8 * sizeof(i));


    return 0;
}
