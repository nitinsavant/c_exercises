double inner_product(const double *a, const double *b, int n) {
    double const *p, *q;
    double result = 0;

    for (p = a, q = b; p < a + n; p++, q++) {
        result += *p * *q;
    }

    return result;
}
