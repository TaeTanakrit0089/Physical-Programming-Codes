#include "stdio.h"

int main() {
    int num, i;
    scanf("%d", &num);
    i = num;
    if (num >= 0) {
        while (i >= 0) {
            printf("%d ", i);
            i--;
        }
    } else {
        while (i <= 0) {
            printf("%d ", i);
            i++;
        }
    }
}