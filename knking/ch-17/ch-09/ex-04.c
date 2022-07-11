
int day_of_year(int month, int day, int year) {
    int result = day;

    int month_days[13] = {0, 31, 28, 31, 30, 31, 30, 30, 31, 30, 31, 30, 31};

    for (int i = 1; i < month; i++) {
        result += month_days[i];
    }

    if (year % 4 == 0 && month > 2) {
        result++;
    }

    return result;
}
