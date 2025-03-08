#include <stdio.h>

int main(void)
{
    int a, b, c, d;
    printf("Enter four integers: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    int largest;
    if (a > b && a > c && a > c)
        largest = a;
    else if (b > a && b > c && b > d)
        largest = b;
    else if (c > a && c > b && c > d)
        largest = c;
    else 
        largest = d;

    int smallest;
    if (a < b && a < c && a < d)
        smallest = a;
    else if (b < a && b < c && b < d)
        smallest = b;
    else if (c < a && c < b && c < d)
        smallest = c;
    else
        smallest = d;

    printf("Largest: %d\nSmallest: %d\n", largest, smallest);
    return 0;
}
