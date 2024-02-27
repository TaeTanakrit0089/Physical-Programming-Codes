#include "stdio.h"

int fibonacci(int num);

int main() {
    int sook, count = 0;
    scanf("%d", &sook);
    printf("method = %d", fibonacci(sook + 1));
}

int fibonacci(int num) {
    if (num == 0) return 0;
    if (num == 1) return 1;
    return fibonacci(num - 1) + fibonacci(num - 2);
}