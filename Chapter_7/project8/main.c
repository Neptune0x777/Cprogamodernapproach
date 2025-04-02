#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int hours, minutes;
    int current_time;
    char time;
    printf("Enter a 12-hour time: ");
    scanf("%2d:%2d%c%c", &hours, &minutes, &time);
    
    if (toupper(time) == 'P')
        hours += 12;

    if (hours >= 0 && hours <= 7)
        current_time = (hours + 24) * 60 + minutes;
    else
        current_time = hours * 60 + minutes;

    
    if (current_time > 480 && current_time <= 583)
        if (current_time - 480 < -(current_time - 583))
            printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
        else
            printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
    else if (current_time > 583 && current_time <= 679)
        if (current_time - 583 < -(current_time - 679))
            printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
        else
            printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
    else if (current_time > 679 && current_time <= 767)
        if (current_time - 679 < -(current_time - 767))
            printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
        else
            printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
    else if (current_time > 767 && current_time <= 840)
        if (current_time - 767 < -(current_time - 840))
            printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
        else
            printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
    else if (current_time > 840 && current_time <= 945)
        if (current_time - 840 < -(current_time - 945))
            printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
        else
            printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
    else if (current_time > 945 && current_time <= 1140)
        if (current_time - 945 < -(current_time - 1140))
            printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
        else
            printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
    else if (current_time > 1140 && current_time <= 1305)
        if (current_time - 1140 < -(current_time - 1305))
            printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
        else
            printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
    else
        if (current_time - 1305 < -(current_time - 1920))
            printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
        else
            printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");    


    return 0;
}
