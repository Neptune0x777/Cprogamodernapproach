#include <stdio.h>

int main(void)
{
    double epsilon = .0;
    double sum_of_e = 1;
    double fract = 1;
    int i = 0;
    printf("Entrez epsilon limite: ");
    scanf("%lf", &epsilon);

    while (1.0 / fract >= epsilon) {
        i++;
        fract *= i;
        sum_of_e += 1.0 / fract;
    }

    printf("Sum of e = %.10lf\n", sum_of_e);
    return 0;
}
