int gcd (m, n) {
    return (n == 0) ? m : gcd(n, m % n);
}
