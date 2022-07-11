
struct complex {
    double real;
    double imaginary;
};

struct complex make_complex(double real, double imaginary) {
    return (struct complex) {real, imaginary};
}

struct complex add_complex(complex c1, complex c2) {
    return (struct complex) {c1.real + c2.real, c1.imaginary + c2.imaginary};
}

int main() {
    struct complex c1, c2, c3;
}

