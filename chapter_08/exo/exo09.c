#include <stdio.h>

int main(void) {
    
    double sum = 0.0;
    double temperature_readings[30][24] = {
        {5,5.5,5,5.5},
        {5,5.5,5,5.5},
        {5,5.5,5,5.5}
    };

    for (int i = 0; i < 30; i++) {
        for (int y = 0; y < 24; y++) {
            sum += temperature_readings[i][y];
        }
    }

    double average = 0.0;
    average = sum / (30*24);

    printf("Average temp is: %f\n", average);

    return 0;
}
