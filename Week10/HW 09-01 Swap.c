#include "stdio.h"

void swap(double *a, double *b);

int main() {
    double sook1, sook2, sook3;
    scanf("%lf %lf %lf", &sook1, &sook2, &sook3);

    swap(&sook1, &sook2);
    swap(&sook2, &sook3);
    swap(&sook3, &sook1);
    swap(&sook1, &sook2);

    printf("%.2f %.2f %.2f", sook1, sook2, sook3);

}

void swap(double *a, double *b) {
    double sooksan = *a;
    *a = *b;
    *b = sooksan;
}