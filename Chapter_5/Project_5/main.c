#include <stdio.h>

int main(void)
{
    float income = .0f;
    printf("Enter your of taxable income: ");
    scanf("%f", &income);

    if (income < 750.0f) 
        income *= 0.001f;
    else if (income >= 750.0f && income < 2250.0f)
        income = income * 0.002f + 7.50f;
    else if (income >= 2250.0f && income < 3750.0f)
        income = income * 0.003f + 37.50f;
    else if (income >= 3750.0f && income < 5250.0f)
        income = income * 0.004f + 82.50f;
    else if (income >= 5250.0f && income < 7000.0f)
        income = income * 0.005f + 142.50f;
    else
        income = income * 0.006f + 230.00f;

    printf("The amount of tax is : %.2f\n", income);

    return 0;
}
