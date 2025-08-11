#include <stdio.h>

int polynomial(int x) 
{
    return (3*x*x*x*x*x)+(2*x*x*x*x)-(5*x*x*x)-(x*x)+(7*x)-6;
}

int main(void) {
  
    int number = 0;
    printf("Entrez une valeur pour x: ");
    scanf("%d", &number);

    number = polynomial(number);
    printf("Resultat: %d\n", number);
    return 0;
}
