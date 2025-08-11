int num_digits (n) {
    if (n == 0) return 1;
    int digits = 0;
    while (n != 0) {
        n /= 10;
        digits++;
    }
    return digits;
}
