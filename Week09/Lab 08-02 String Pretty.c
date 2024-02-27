#include "stdio.h"
#include "string.h"
#include "math.h"

void loop_print(char text, int size);

int main() {
    int size;
    char sook1[60], sook2[60];

    scanf("%d", &size);
    scanf(" %[^\n]s", sook1);
    scanf(" %[^\n]s", sook2);

    int left_padding, right_padding;
    int sook1_len = strlen(sook1), sook2_len = strlen(sook2);

//    line 1
    loop_print('*', size);
    printf("\n");

//    line 2
    right_padding = ((size - sook1_len - 2) / 2);
    left_padding = right_padding + ((size - sook1_len) % 2);

    printf("*");
    loop_print(' ', left_padding);
    printf("%s", sook1);
    loop_print(' ', right_padding);
    printf("*\n");

//    line 3
    right_padding = ((size - sook2_len - 2) / 2);
    left_padding = right_padding + ((size - sook2_len) % 2);

    printf("*");
    loop_print(' ', left_padding);
    printf("%s", sook2);
    loop_print(' ', right_padding);
    printf("*\n");

//    line 4
    loop_print('*', size);
    printf("\n");

}

void loop_print(char text, int size) {
    for (int i = 0; i < size; i++) printf("%c", text);
}