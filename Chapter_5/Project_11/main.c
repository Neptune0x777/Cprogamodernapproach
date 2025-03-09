#include <stdio.h>

int main(void) {
    
    int number;
    printf("Enter a two-digit number:  ");
    scanf("%2d", &number);
    
    if (number == 0) {
        printf("Zero\n");
        return 0;
    }

    if (number > 10 &&  number < 20) {
        switch (number) {
            case 11: printf("Eleven\n"); break;
            case 12: printf("Twelve\n"); break;
            case 13: printf("Thirteen\n"); break;
            case 14: printf("Fourteen\n"); break;
            case 15: printf("Fifteen\n"); break;
            case 16: printf("Sixteen\n"); break;
            case 17: printf("Seventeen\n"); break;
            case 18: printf("Eighteen\n"); break;
            case 19: printf("Nineteen\n"); break;
        }
        return 0;
    }

    if (number / 10) {
        switch (number / 10) {
            case 1: printf("Ten\n"); break;
            case 2: printf("%s", (number / 10 && number % 10) ? "Twenty" : "Twenty\n"); break;
            case 3: printf("%s", (number / 10 && number % 10) ? "Thirty" : "Thirty\n"); break;
            case 4: printf("%s", (number / 10 && number % 10) ? "Forty" : "Forty\n"); break;
            case 5: printf("%s", (number / 10 && number % 10) ? "Fifty" : "Fifty\n"); break;
            case 6: printf("%s", (number / 10 && number % 10) ? "Sixty" : "Sixty\n"); break;
            case 7: printf("%s", (number / 10 && number % 10) ? "Seventy" : "Seventy\n"); break;
            case 8: printf("%s", (number / 10 && number % 10) ? "Eighty" : "Eighty\n"); break;
            case 9: printf("%s", (number / 10 && number % 10) ? "Ninety" : "Ninety\n"); break;
        }
    }
    
    if (number / 10 && number % 10)
        printf("-");

    if (number % 10) {
        switch (number % 10) {
            case 1: printf("one\n"); break;
            case 2: printf("two\n"); break;
            case 3: printf("three\n"); break;
            case 4: printf("four\n"); break;
            case 5: printf("five\n"); break;
            case 6: printf("six\n"); break;
            case 7: printf("seven\n"); break;
            case 8: printf("eight\n"); break;
            case 9: printf("nine\n"); break;
        }
    }


    return 0;
}
