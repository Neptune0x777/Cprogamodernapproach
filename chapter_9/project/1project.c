#include <stdio.h>
#include <limits.h>

#define N 10

void selection_sort(int a[], int n) {
    if (n == 1) return;
    int largest = INT_MIN;
    int position = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > largest) {
            largest = a[i];
            position = i;
        }
    }
    int temp = 0;
    temp = a[n-1];
    a[n-1] = largest;
    a[position] = temp;
    selection_sort(a, n - 1);
}

int main(void) {
    int array[N] = {0};
    printf("Entrez %d entiers : ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }
    selection_sort(array, N);
    printf("Sorted: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", array[i]);
    }
    putchar('\n');
    return 0;
}
