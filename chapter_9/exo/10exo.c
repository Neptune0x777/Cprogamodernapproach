int largest(int a[], int n) {
    int largest = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (a[i] > largest)
            largest = a[i];
    }
    return largest;
}
double average(int a[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += a[i];
    }
    return (double) total / n;
}
int count_positive(int a[], int n) {
    int positive = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) positive++;
    }
    return positive;
}
