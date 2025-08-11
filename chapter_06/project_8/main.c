#include <stdio.h>


int main(void)
{
	int month_size = 0, start_day = 0;

    printf("Enter number of days in month: ");
    scanf("%d", &month_size);
    printf("\nEnter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start_day);

    for (int i = 1; i < start_day; i++) 
        printf("    ");

    for (int i = 1; i <= month_size; i++) {
        printf("%3d ", i);
        if ((i+(start_day-1)) % 7 == 0)
            printf("\n");
    }
	return 0;
}
