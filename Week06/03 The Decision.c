#include "stdio.h"

int main() {
    int num1, num2;
    scanf("%d\n%d", &num1, &num2);
    if (num1 < num2) {
        for (int i = num1; i <= num2; i++) {
            printf("%d ", i);
        }
    } else {
        for (int i = num1; i >= num2; i--) {
            printf("%d ", i);
        }
    }
}