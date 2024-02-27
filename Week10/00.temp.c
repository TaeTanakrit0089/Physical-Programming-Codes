#include "stdio.h"

int main() {
    for (int i = 0; i <= 2; i++) {
        for (int j = i; j >= 1; j--)
            printf("%d", j);
        printf("\n");
    }
}