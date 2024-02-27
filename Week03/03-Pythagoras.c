#include "stdio.h"
#include "math.h"

int main() {
    float side_a, side_b, side_c;
    scanf("%f%f", &side_a, &side_b);
    side_c = sqrtf(powf(side_a, 2) + powf(side_b, 2));
    printf("%.2f", side_c);
}