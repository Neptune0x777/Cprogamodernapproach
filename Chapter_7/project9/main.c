#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int hours, minutes;
    char time;
    printf("Enter a 12-hour time: ");
    scanf("%2d:%2d%c%c", &hours, &minutes, &time);
    
    if (toupper(time) == 'P')
        hours += 12;

    printf("Equivalent 24-hour time: %02d:%02d %c%c\n", hours, minutes, time == 'P' ? 'P' : 'A', 'M' );

    return 0;
}
