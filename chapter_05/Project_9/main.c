#include <stdio.h>

int main(void)
{
    int days_1, month_1, year_1;
    int days_2, month_2, year_2;
    printf("Enter first date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &month_1, &days_1, &year_1);
    printf("Enter first date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &month_2, &days_2, &year_2);

    if (year_1 != year_2)
        if (year_1 < year_2)
            printf("%d/%d/%d is earlier than %d/%d/%d\n", month_1, days_1, year_1, month_2, days_2, year_2);
        else 
            printf("%d/%d/%d is earlier than %d/%d/%d\n", month_2, days_2, year_2, month_1, days_1, year_1);
    else if (month_1 != month_2)
        if (month_1 < month_2)
            printf("%d/%d/%d is earlier than %d/%d/%d\n", month_1, days_1, year_1, month_2, days_2, year_2);
        else
            printf("%d/%d/%d is earlier than %d/%d/%d\n", month_2, days_2, year_2, month_1, days_1, year_1);
    else if (days_1 != days_2)
        if (days_1 < days_2)
            printf("%d/%d/%d is earlier than %d/%d/%d\n", month_1, days_1, year_1, month_2, days_2, year_2);
        else
            printf("%d/%d/%d is earlier than %d/%d/%d\n", month_2, days_2, year_2, month_1, days_1, year_1);
    else
        printf("The 2 dates are equal\n");

    return 0;
}
