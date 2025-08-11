#include <stdio.h>

int main(void)
{
    float interest_rate;
    float balance;
    int years;

    printf("Enter initial balance: ");
    scanf("%f", &balance);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    printf("Enter number of years: ");
    scanf("%d", &years);
    
    printf("\nYear    Balance\n");

    for (int i = 1; i <= years * 12; i++) {
        balance += balance * ((interest_rate / 12) / 100.0f);  // intérêt annuel
        if (i % 12 == 0) {
            printf("%3d     %.2f\n", i / 12, balance);
        }
    }

    return 0;
}
