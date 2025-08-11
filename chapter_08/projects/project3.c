#include <stdio.h>

int main(void) {
    int digit;
    long n;

    for (;;) {
        int digit_repeated[10] = {0};
        printf("Enter a number (0 to stop): ");
        scanf("%ld", &n);

        if (n <= 0) {
            break;
        }

        while (n > 0) {
            digit = n % 10;
            digit_repeated[digit]++;
            n /= 10;
        }

        printf("Digit:\t     ");
        for (int i = 0; i < 10; i++) {
            printf("%d ", i);
        }
        printf("\nOccurrences: ");
        for (int i = 0; i < 10; i++) {
            printf("%d ", digit_repeated[i]);
        }
        printf("\n");
    }
    return 0;
}
