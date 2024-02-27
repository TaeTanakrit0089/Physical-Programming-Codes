#include "stdio.h"

int main() {
    int sum = 0, num;
    scanf("%d", &num);
    while (num != -9) {
        sum += num;
        scanf("%d", &num);
    }
    printf("%d", sum);
}