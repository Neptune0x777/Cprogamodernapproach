#include <stdio.h>

void pb(int n) 
{
    if (n != 0) {
        pb(n / 2);
        putchar('0' + n % 2);
    } 
}


int main(void) {
    int binary = 0;
    printf("Enter a number to convert into binary: ");
    scanf("%d", &binary);
    printf("The number %d in binary is == to ");
    pb(binary);
    putchar('\n');
    return 0;
}
