#include <stdio.h>

int main(void)
{
    double n, sum = .0;

    printf("This program sums a series of double.\n");
    printf("Enter double (0.0 to terminate): ");

    scanf("%lf", &n);
    while (n != 0.0) {
        sum += n;
        scanf("%lf", &n);
    }
    printf("The sum is: %.4lf\n", sum);

    return 0;
}
