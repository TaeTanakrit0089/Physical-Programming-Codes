#include "stdio.h"
#include "ctype.h"

int main() {
    char sook;
    scanf("%c", &sook);
//    bool isCapital = sook >= 65 && sook <= 90, isLower = sook >= 97 && sook <= 122;
//    bool isNumberize = sook >= 30 && sook <= 39;
//    if (isCapital)
//        printf("uppercase");
//    else if (isLower)
//        printf("lowercase");
//    else if (isNumberize)
//        printf("number");
//    else
//        printf("error");

    if (isupper(sook))
        printf("uppercase");
    else if (islower(sook))
        printf("lowercase");
    else if (isdigit(sook))
        printf("number");
    else
        printf("error");
}