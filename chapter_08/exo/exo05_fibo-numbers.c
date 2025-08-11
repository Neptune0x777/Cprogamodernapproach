#include <stdio.h>
#include <math.h>


int main(void) {
    
    int fibonacci[40] = {0, 1};
    for (int i = 2; i < 40; i++) {
        fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];
    }
    for (int i = 0; i < 40; i++) {
        printf("fibonacci[%d] = %d\n", i+1, fibonacci[i]);
    }
    return 0;
}
