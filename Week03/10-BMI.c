#include "stdio.h"

int main() {
    float height, weight, result;
    scanf("%f\n%f", &height, &weight);
    height = height / 100;
    result = weight / (height * height);
    printf("%f", result);
}