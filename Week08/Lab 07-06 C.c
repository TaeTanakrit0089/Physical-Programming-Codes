#include "stdio.h"
#include "math.h"

double calculate(double a, double b);

int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("sqrt(%.0f^2+%.0f^2)=%.2f", a, b, calculate(a, b));
}

double calculate(double a, double b) {
    return pow(pow(a, 2) + pow(b, 2), 0.5);
}