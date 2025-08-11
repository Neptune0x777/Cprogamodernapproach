float compute_GPA(char grades[], int n) {
    if (n == 0) return 0.0f;
    float total = 0;
    for (int i = 0; i < n; i++) {
        switch (grades[i]) {
            case 'a':
            case 'A': total += 4.0f; break;
            case 'b':
            case 'B': total += 3.0f; break;
            case 'c':
            case 'C': total += 2.0f; break;
            case 'd':
            case 'D': total += 1.0f; break;
            default: break;
        }
    }
    return total / n;
}
