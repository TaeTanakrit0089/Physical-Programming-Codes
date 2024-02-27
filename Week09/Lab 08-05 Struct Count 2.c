#include "stdio.h"
#include "string.h"
#include "ctype.h"

int main() {
    char sooksan[500] = "Sooksan";
    struct data {int char_count; int word_count; int line_count;};
    scanf(" %[^\n]s", sooksan);
    struct data sook = {0, 0, 0};
    while (strcmp(sooksan, ".") != 0) {
        for (int i = 0; i < strlen(sooksan); i++) if (isblank(sooksan[i])) sook.word_count++; else sook.char_count++;
        sook.word_count++; sook.line_count++;
        scanf(" %[^\n]s", sooksan);
    }
    printf("Char = %d, word = %d, line = %d", sook.char_count, sook.word_count, sook.line_count);
}