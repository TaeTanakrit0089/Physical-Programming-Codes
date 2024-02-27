#include "stdio.h"

int main() {
    float sook;
    scanf("%f", &sook);
    if (sook > 100 || sook < 0)
        printf("Out of Range");
    else if (sook >= 80)
        printf("A");
    else if (sook >= 70)
        printf("B");
    else if (sook >= 60)
        printf("C");
    else if (sook >= 50)
        printf("D");
    else
        printf("F");
}