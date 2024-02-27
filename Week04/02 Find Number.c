#include "stdio.h"

int main() {
    float num1, num2, num3, temp;
    scanf("%f %f %f", &num1, &num2, &num3);

    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num1 > num3) {
        temp = num1;
        num1 = num3;
        num3 = temp;
    }
    if (num2 > num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }
    printf("%.2f", num2);

}