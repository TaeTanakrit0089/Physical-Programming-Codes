#include "stdio.h"
#include "stdbool.h"

bool isTriangle(float side_a, float side_b, float side_c) {
    if (side_a + side_b > side_c)
        return true;
    return false;
}

int main() {
    float side_a, side_b, side_c;
    scanf("%f\n%f\n%f", &side_a, &side_b, &side_c);
    if (isTriangle(side_a, side_b, side_c) && isTriangle(side_b, side_c, side_a) && isTriangle(side_c, side_a, side_b))
        printf("Triangle is valid.");
    else
        printf("Triangle is not valid.");
}

