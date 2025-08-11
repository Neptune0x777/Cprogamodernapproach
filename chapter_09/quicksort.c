#include <stdio.h>

void quicksort(int a[], int low, int high);
int partition(int a[], int low, int high);

int main(void) {
    
    int tableau[10] = {4, 5, 6, 7, 11, 20, 56, 2, 4, 8};
    quicksort(tableau, 0, 10-1);

    for (int i = 0; i < 10; i++) {
        printf("%d - ", tableau[i]);
    }
    return 0;
}


void quicksort(int a[], int low, int high) {
    if (low >= high) return;

    int index_partition = partition(a, low, high);
    quicksort(a, low, index_partition);
    quicksort(a, index_partition + 1, high);
}
int partition(int a[], int low, int high) {
    int pivot = a[low];
    for (;;) {
        while (low <= high && a[low] < pivot) {
            low++;
        }
        while (low <= high && a[high] > pivot) {
            high--;
        }
        if (low >= high) {
            return high;
        }
        int temp = a[low];
        a[low] = a[high];
        a[high] = temp;
        low++;
        high--;
        
    }
}
