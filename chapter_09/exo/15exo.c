double median(double x, double y, double z)
{
    double median = 0.0;
    if (x <= y) {
        if (y <= z) {
            median = y;
        } else if (z <= x) {
            median = x;
        } else {
            median = z;
        }
    } else {
        if (x <= z) {
            median = x;
        } else if (z <= y) {
            median = y;
        } else {
            median = z;
        }
    }
    return median;
}
