
typedef struct {
    double real;
    double imaginary;
} Complex;

Complex make_complex(double real, double imaginary) {
    return (Complex) {real, imaginary};
}

Complex add_complex(Complex c1, Complex c2) {
    return (Complex) {c1.real + c2.real, c1.imaginary + c2.imaginary};
}

int main() {
    Complex c1, c2, c3;
}

