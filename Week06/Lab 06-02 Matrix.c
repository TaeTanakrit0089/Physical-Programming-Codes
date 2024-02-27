#include "stdio.h"

int main() {
    float met_a[3][3], met_b[3][3], result[3][3];
    for (int i = 0; i < 3; i++) {
        scanf("%f %f %f", &met_a[i][0], &met_a[i][1], &met_a[i][2]);
    }
    for (int i = 0; i < 3; i++) {
        scanf("%f %f %f", &met_b[i][0], &met_b[i][1], &met_b[i][2]);
    }

    // Start Calculation
    float temp;
    for (int i = 0; i < 3; i++) {
        for (int j=0;j<3;j++){
            temp = 0;
            for (int k=0; k<3;k++){
                temp += met_a[i][k] * met_b[k][j];
            }
            result[i][j] = temp;
        }
    }
    printf("A x B");
    for (int i = 0; i < 3; i++) {
        printf("\n%0.2f %0.2f %0.2f", result[i][0], result[i][1], result[i][2]);
    }
}