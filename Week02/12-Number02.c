#include "stdio.h"

int main() {
    char text[7];
    scanf("%s", text);
    for (int i=0; i<80; i++){
        printf("*");
    }

    printf("%.1s%80.0s", text, "");
    printf("%1.2s%79.0s", text, "");
    printf("%2.3s%78.0s", text, "");
    printf("%3.4s%77.0s", text, "");
    printf("%4.5s%76.0s", text, "");
}