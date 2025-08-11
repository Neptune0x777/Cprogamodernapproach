#include <stdio.h>

float income_calc(float amount) {
    float income = 0.0f;
    if (amount < 750.0f) 
        income = amount * 0.001f;
    else if (amount >= 750.0f && amount < 2250.0f)
        income = amount * 0.002f + 7.50f;
    else if (amount >= 2250.0f && amount < 3750.0f)
        income = amount * 0.003f + 37.50f;
    else if (amount >= 3750.0f && amount < 5250.0f)
        income = amount * 0.004f + 82.50f;
    else if (amount >= 5250.0f && amount < 7000.0f)
        income = amount * 0.005f + 142.50f;
    else
        income = amount * 0.006f + 230.00f;
    return income;
}

int main(void)
{
    float income = .0f;
    printf("Enter your of taxable income: ");
    scanf("%f", &income);
    income = income_calc(income);

    printf("The amount of tax is : %.2f\n", income);

    return 0;
}
