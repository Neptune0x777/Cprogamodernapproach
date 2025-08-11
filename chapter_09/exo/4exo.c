int day_of_year(month, day, year) {
    int mois[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        mois[1] = 29;
    int total = 0;
    for (int i = 1; i < month; i++) 
        total += mois[i - 1];
    return total + day;
}
