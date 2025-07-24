int gcd (m, n) {
    while (n != 0) {
        int r = m % n;
        m = n; 
        n = r;
    }
    return m;
}
