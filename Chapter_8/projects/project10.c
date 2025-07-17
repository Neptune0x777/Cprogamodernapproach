#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    int hours, minutes;
    int current_time;
    printf("Enter a 24-hour time: ");
    scanf("%2d:%2d", &hours, &minutes);
    if (hours >= 0 && hours < 3) {
        current_time = (hours + 24) * 60 + minutes;
    } else {
        current_time = hours * 60 + minutes;
    }
    
    int departure_times[] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arrival_times[]   = {616, 712, 811, 900, 968, 1075, 1280, 1438};
    int index = 0;
    int closest = abs(current_time - departure_times[0]);
    
    for (int i = 1; i < 8; i++) {
        if (closest > abs(current_time - departure_times[i])) {
            index = i;
            closest = abs(current_time - departure_times[i]);
        }
    }
    // 12 hours format
    int dep_hours = departure_times[index] / 60;
    int arr_hours = arrival_times[index] / 60; 
    bool dep_hours_time = false;
    bool arr_hours_time = false;
    if (dep_hours >= 12) {
        if (dep_hours == 12) {
            dep_hours_time = true;
        } else if (dep_hours == 24) {
            dep_hours = 0;
        } else {
            dep_hours = (departure_times[index] / 60) % 12;
            dep_hours_time = true;
        }
    }
    if (arr_hours >= 12) {
        if (arr_hours == 12) {
            dep_hours_time = true;
        } else if (arr_hours == 24) {
            dep_hours = 0;
        } else {
            arr_hours = (arrival_times[index] / 60) % 12;
            arr_hours_time = true;
        }
    }
    printf("Heure de depart le plus proche: %02d:%02d %s et heure d'arrive: %02d:%02d %s\n", 
        dep_hours, departure_times[index] % 60, (dep_hours_time) ? "PM" : "AM" ,arr_hours, arrival_times[index] % 60, (arr_hours_time) ? "PM" : "AM");
    
    return 0;
}
