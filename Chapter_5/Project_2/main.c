#include <stdio.h>
#include <stdbool.h>

int main(void) {
    
    int hours, minutes;
    bool am = true;
    printf("Enter a 24-hour time: ");
    scanf("%d :%d", &hours, &minutes);

    switch (hours) {
        case 0: hours = 12; am=true; break;
        case 1: am=true; break;
        case 2: am=true; break;
        case 3: am=true; break;
        case 4: am=true; break;
        case 5: am=true; break;
        case 6: am=true; break;
        case 7: am=true; break;
        case 8: am=true; break;
        case 9: am=true; break;
        case 10: am=true; break;
        case 11: am=true; break;
        case 12: am=false; break;
        case 13: hours = 1; am=false; break;
        case 14: hours = 2; am=false; break;
        case 15: hours = 3; am=false; break;
        case 16: hours = 4; am=false; break;
        case 17: hours = 5; am=false; break;
        case 18: hours = 6; am=false; break;
        case 19: hours = 7; am=false; break;
        case 20: hours = 8; am=false; break;
        case 21: hours = 9; am=false; break;
        case 22: hours = 10; am=false; break;
        case 23: hours = 11; am=false; break;
    }

    printf("Equivalent 12-hour time: %02d:%02d %s\n", hours, minutes, am ? "AM" : "PM");

    return 0;
    
}
