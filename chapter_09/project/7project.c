#include <stdio.h>

int power(int x, int n)
{
    if (n == 0)
        return 1;
    else if (n % 2 == 0) {
        int half = power(x, n / 2);
        return half * half;
    }
    else
        return x * power(x, n - 1);
}

int main(void) {
  
    int nombre, puissance;
    printf("Entrez un nombre pour x: ");
    scanf("%d", &nombre);
    printf("Entrez un nombre pour la puissance: ");
    scanf("%d", &puissance);

    printf("Resultat: %d\n", power(nombre, puissance));
    
    return 0;
}
