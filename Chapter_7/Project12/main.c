#include <stdio.h>

int main(void) {
    
    float num = 0.0f, total = 0.0f;
    char sign;

    printf("Enter an expression: ");
    scanf("%f", &total);

    while ((sign = getchar()) != '\n') {
        switch (sign) {
            case '*':
                scanf("%f", &num);
                total *= num;
                break;
            case '+':
                scanf("%f", &num);
                total += num;
                break;
            case '-':
                scanf("%f", &num);
                total -= num;
                break;
            case '/':
                scanf("%f", &num);
                total /= num;
                break;
        }
    }
    printf("The expression value: %.1f\n", total);
    return 0;
}
