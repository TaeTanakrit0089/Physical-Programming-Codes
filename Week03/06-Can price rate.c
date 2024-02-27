#include "stdio.h"

int main() {
    float price, diameter, height, pi = 3.14159265359;
    scanf("%f\n%f\n%f", &price, &diameter, &height);
    float radius = diameter / 2, volume = height * pi * radius * radius;


    printf("Volume : %.2fml\n", volume);
    printf("Baht/ml : %.4f", price / volume);
}