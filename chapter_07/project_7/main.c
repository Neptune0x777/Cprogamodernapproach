#include <stdio.h>

int main(void)
{
	int num1, denom1, num2, denom2, result_num, result_denom;
    char sign;
	printf("Enter two fractions separated by a plus sign: ");
	scanf("%d /%d %c%d /%d", &num1, &denom1, &sign,  &num2, &denom2);

    if (num2 == 0 && sign == '/' || denom1 == 0 || denom2 == 0) {
        printf("cant divide by zero\n");
        return 1;
    }
    
    switch (sign) {
        case '*':
            result_num = num1 * num2;
            result_denom = denom1 * denom2;
            break;
        case '+':
            result_num = num1 * denom2 + num2 * denom1;
            result_denom = denom1 * denom2;
            break;
        case '-':
            result_num = num1 * denom2 - num2 * denom1;
            result_denom = denom1 * denom2;
            break;
        case '/':
            result_num = num1 * denom2;
            result_denom = num2 * denom1;
            break;
        default:
            printf("Enter / * + or - for the sign.");
            return 1;
    }

    int m = result_num, n = result_denom, remainder;
  
    while (n != 0) {
      remainder = m % n;
      m = n;
      n = remainder;
    }

    result_num /= m;
    result_denom /= m;
	
    printf("The result of %d/%d %c %d/%d is %d/%d\n", num1, denom1, sign, num2, denom2, result_num, result_denom);

	return 0;
}
