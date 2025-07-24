int digit(int n, int k) {
    for (int i = 1; i < k; i++) {
        n /= 10;
        if (n == 0) return 0;
    }
    return n % 10;
}
