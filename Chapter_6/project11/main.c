#include <stdio.h>

int main(void)
{
    int nb = 0;
    double sum_of_e = 1;
    double fract = 1;
    printf("Entrez un entier: ");
    scanf("%d", &nb);

    for (int i = 1; i <= nb; i++) {
        fract *= i;
        sum_of_e += 1.0 / fract;
    }

    printf("Sum of e = %.4lf\n", sum_of_e);
    return 0;
}
