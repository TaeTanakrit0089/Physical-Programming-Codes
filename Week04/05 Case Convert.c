#include <stdbool.h>
#include "stdio.h"

int main() {
    char sook;
    scanf("%c", &sook);
    bool isCapital = sook >= 65 && sook <= 90, isLower = sook >= 97 && sook <= 122;
    if (!(isCapital || isLower))
        printf("error");
    else if (isCapital)
        printf("%c", sook + 32);
    else if (isLower)
        printf("%c", sook - 32);
}