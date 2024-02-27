#include "stdio.h"
#include "math.h"

double perimeter(double a, double b, double c);

double area(double a, double b);

int main() {
    double a, b, c, perimeters, areas;
    scanf("%lf\n%lf", &a, &b);
    c = pow(pow(a, 2) + pow(b, 2), 0.5);
    printf("Perimeter: %.2f", perimeter(a, b, c));
    printf("\nArea: %.2f", area(a, b));
}

double perimeter(double a, double b, double c) {
    return a + b + c;
}

double area(double a, double b) {
    return 1.0 / 2.0 * a * b;
}