#include "stdio.h"
#include "float.h"

double getValue();

double findMin(double array[], int size);

double findMax(double array[], int size);

double findAvg(double array[], int size);

int main() {
    int n;
    scanf("%d", &n);

    double array[n];
    for (int i = 0; i < n; ++i) {
        array[i] = getValue();
    }

    double min, max, avg;
    min = findMin(array, n);
    max = findMax(array, n);
    avg = findAvg(array, n);

    printf("%d Values", n);
    printf("\nMin: %.3f", findMin(array, n));
    printf("\nMax: %.3f", findMax(array, n));
    printf("\nAvg: %.3f", findAvg(array, n));
}

double getValue() {
    double value;
    scanf("%lf", &value);
    return value;
}

double findMin(double array[], int size) {
    double min = DBL_MAX;
    for (int i = 0; i < size; i++) if (array[i] < min) min = array[i];
    return min;
}

double findMax(double array[], int size) {
    double max = DBL_MIN;
    for (int i = 0; i < size; i++) if (array[i] > max) max = array[i];
    return max;
}

double findAvg(double array[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) sum += array[i];
    return sum / (double) size;
}