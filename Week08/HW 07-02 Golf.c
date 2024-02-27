#include "stdio.h"
#include "math.h"

int main() {
    int degree, speed;
    double pi = 3.141592653589793;
    scanf("%d\n%d", &degree, &speed);
    double height = (pow(speed, 2) * pow(sin(degree * pi / 180), 2)) / (2 * 9.81);
    printf("theta (degree) : %d\n"
           "u (m/s) : %d\n"
           "h (m) : %.4f", degree, speed, height);

}