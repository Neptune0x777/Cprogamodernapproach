#include <stdio.h>


int main(void)
{
	int number = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = 2; i*i <= number; i++) {
        if (i % 2 == 0)
            printf("%d\n", i*i);
    }

	return 0;
}
