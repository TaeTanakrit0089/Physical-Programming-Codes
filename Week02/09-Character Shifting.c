#include "stdio.h"

int main() {
    char s;
//    char l1, l2, l3, l4, l5;
//    scanf("%s %s %s %s %s", &l1, &l2, &l3, &l4, &l5);
    for (int i = 1; i <= 5; i++) {
        scanf(" %c", &s);
        if (i % 2 == 1) {
            s++;
        }
        printf("%c\n", s);
    }
}