#include <stdio.h>
#include <string.h>

int main() {
    char text1[30], text2[30], text3[30], text4[30];
    scanf("%s", text1);
    scanf("%s", text2);
    scanf("%s", text3);
    scanf("%s", text4);

    text1[3]  = '\0';
    text2[4]  = '\0';
    text3[5]  = '\0';
    text4[6]  = '\0';

    printf("String 1: %s\n", text1);
    printf("String 2: %s\n", text2);
    printf("String 3: %s\n", text3);
    printf("String 4: %s\n", text4);
    return 0;
}
