#include "stdio.h"


void print_text(char text, int num) {
    for (int i = 0; i < num; i++) {
        printf("%c", text);
    }
}

int main() {
    int space, stars = 1, num;
    scanf("%d", &num);
    space = num - 1;
    for (int i = 0; i < num; i++) {
        print_text(' ', space);
        print_text('*', stars);
        printf("\n");
        space -= 1;
        stars += 2;
    }
}