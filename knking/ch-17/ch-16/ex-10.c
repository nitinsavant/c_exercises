#include <stdio.h>
#include <stdlib.h>

struct point { int x, y; };
struct rectangle { struct point upper_left, lower_right; };

double compute_area(struct rectangle r) {
    int length = r.lower_right.x - r.upper_left.x;
    int height = r.upper_left.y - r.lower_right.y;

    return abs(length * height);
}

struct point compute_center(struct rectangle r) {
    int x = (r.lower_right.x + r.upper_left.x) / 2;
    int y = (r.upper_left.y + r.lower_right.y) / 2;
    return (struct point) {x, y};
}

struct rectangle move(struct rectangle r, int x, int y) {
    r.upper_left.x += x;
    r.upper_left.y += y;
    r.lower_right.x += x;
    r.lower_right.y += y;

    return r;
}

bool point_in_rectangle(struct rectangle r, struct point p) {
    return (p.x >= r.upper_left.x &&
    p.x <= r.lower_right.x &&
    p.y >= r.lower_right.y &&
    p.y <= r.upper_left.y);
}

int main(void) {
    printf("%f\n", compute_area(r));
}