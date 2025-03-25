#include <stdio.h>

int main(void)
{
	float loan_balance, monthly_payment;
	float interest_rate, monthly_interest_rate;

	printf("Enter amount of loan: ");
	scanf("%f", &loan_balance);

	printf("Enter interest rate: ");
	scanf("%f", &interest_rate);
	monthly_interest_rate = interest_rate / (100 * 12);

	printf("Enter monthly payment: ");
	scanf("%f", &monthly_payment);

	int number_payment = 0;
    printf("Enter the number of payments: ");
    scanf("%f", &number_payment);

    for (int i = 0; i < number_payment; i++) {
        loan_balance = loan_balance - monthly_payment + loan_balance * monthly_interest_rate;
        printf("\nBalance remaining after first payment: $%.2f\n", loan_balance);
    }
	

	return 0;
}
