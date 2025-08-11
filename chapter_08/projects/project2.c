#include <stdio.h>

int main(void) {
    int digit_repeated[10] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

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
    return 0;
}
