#include "stdio.h"
#include "stdbool.h"

int main() {
    int i = 5, j = 36;
    float x = 0.001, y = 0.00, z = -81.753;
    char c = 'z', d = 'M';

    y -= (c + d) / i + x;
    printf("%f", y);

    return 0;
}