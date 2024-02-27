#include "stdio.h"

int main() {
    char sook;
    scanf("%c", &sook);
    if (sook == 'A' || sook == 'a')
        printf("Genius");
    else if (sook == 'B' || sook == 'b')
        printf("Good");
    else if (sook == 'C' || sook == 'c')
        printf("Try Harder");
    else if (sook == 'D' || sook == 'd')
        printf("Very Bad");
    else if (sook == 'F' || sook == 'f')
        printf("Fail");
    else
        printf("Invalid Input");
}