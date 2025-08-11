#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void) {
    
    short x = 0, result = 1;

    printf("Enter a positive integer: ");
    scanf("%hd", &x);

    for (int i = 2; i <= x; i++) {
        result *= i; 
    }

    printf("Factorial of %hd: %hd\n", x, result);
    return 0;
}
