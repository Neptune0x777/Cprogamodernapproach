#include <stdio.h>

int main(void) {
    
    float number = 0.0f, biggest_number = 0.0;

    for (;;) {
        printf("Enter a number: ");
        scanf("%f", &number);

        if (number <= 0.0f)
            break;
        
        if (number > biggest_number)
            biggest_number = number;
    }
    printf("The largest number entered was %g\n", biggest_number);
    return 0;
}
