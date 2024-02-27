#include "stdio.h"
#include "stdbool.h"

int main() {
    float met_a[3][3];
    bool is_not_zero = false;
    for (int i = 0; i < 3; i++) {
        scanf("%f %f %f", &met_a[i][0], &met_a[i][1], &met_a[i][2]);
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (met_a[i][j] != 0 && !i == j)
                is_not_zero = true;
        }
    }
    if (!is_not_zero && (met_a[0][0] == met_a[1][1] && met_a[0][0] == met_a[2][2]))
        printf("This is a scalar matrix");
    else
        printf("This is not a scalar matrix");
}