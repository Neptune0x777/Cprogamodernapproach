#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int days, month, year;
    int days_early = 0, month_early = 0, year_early = 0;
    bool first_input = true;
    
    for (;;) {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month, &days, &year);

        if (month == 0 && days == 0 && year == 0)
            break;

        if (first_input) {
            days_early = days;
            month_early = month;
            year_early = year;
            first_input = false;
            continue;
        }

        if (year < year_early ||
            year == year_early && month < month_early ||
            year == year_early && month < month_early && days < days_early) {

            year_early = year;
            month_early = month;
            days_early = days;
        }

    }

    printf("%d/%d/%02d is the earliest date\n", month_early, days_early, year_early);

    
    return 0;
}
