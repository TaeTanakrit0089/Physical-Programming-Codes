#include "stdio.h"

int main() {
    float num_1, num_2, num_3, num_4, sum, avg;
    scanf("%f%f%f%f", &num_1, &num_2, &num_3, &num_4);

    sum = num_1 + num_2 + num_3 + num_4;
    avg = sum / 4;

    printf("Summation is %.2f\n", sum);
    printf("Average is %.3f", avg);
}