#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void) {
    
    double x = 0.0, y = 1.0, sqrt;
    bool finish = false;   

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    do {
        sqrt = (y + x / y) / 2;
        if (fabs(y - sqrt) < .00001 * y) {
            finish = true;
        }
        y = sqrt;
    } while (!finish);

    printf("Square root: %.5f\n", sqrt);

    return 0;
}
