int main(void) {
    int const N = 10;

    double ident[N][N];
    int row, col;

    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            if (row == col)
                ident[row][col] = 1.0;
            else
                ident[row][col] = 0.0;
        }
    }
}