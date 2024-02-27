#include "stdio.h"
#include "ctype.h"
#include "string.h"

int main() {
    char sook[151];
    scanf("%[^\n]s", sook);
    int spaces = 0, size = strlen(sook), count = 0;
    for (int i = 0; i < size; i++) if (isblank(sook[i])) spaces++;
    printf("%d words\n"
           "----\n", spaces + 1);
    for (int i = 0; i < size; i++) {
        if (isspace(sook[i])) {
            printf(" : %d\n", count);
            count = 0;
            continue;
        }
        printf("%c", tolower(sook[i]));
        count++;
    }
    printf(" : %d\n", count);
}