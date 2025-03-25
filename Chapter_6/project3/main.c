#include <stdio.h>

int main(void) {
    
    int num_1 = 0, num_2 = 0;

    printf("Enter a fraction: ");
    scanf("%d /%d", &num_1, &num_2);
    
    int m = num_1;
    int n = num_2;
    int r = 0;
    while (n != 0) {
        r = m % n;
        m = n;
        n = r;
    }

    printf("In lowest terms: %d/%d\n", num_1 / m, num_2 / m);
    return 0;
}
