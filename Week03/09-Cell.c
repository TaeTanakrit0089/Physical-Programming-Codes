#include "stdio.h"

int main() {
    char text[4];
    scanf("%s", text);

    printf("*****\n"
           "*-*-*\n"
           "*%3s*\n"
           "*-*-*\n"
           "*****", text);
}