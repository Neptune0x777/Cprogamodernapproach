#include <stdbool.h>
#include <stdio.h>

int main(void) {
    bool digit_seen[10] = {false};
    bool digit_repeated[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit]) {
            digit_repeated[digit] = true;
        }
        digit_seen[digit] = true;
        n /= 10;
    }

    bool repeated_digit = false;
    for (int i = 0; i < 10; i++) {
        if (digit_repeated[i]) {
            repeated_digit = true;
            break;
        }
    }

    if (repeated_digit) {
        printf("Repeated digit(s): ");
        for (int i = 0; i < 10; i++) {
            if (digit_repeated[i])
                printf("%d ", i);
        }
    } else
        printf("No repeated digit\n");

    return 0;
}
