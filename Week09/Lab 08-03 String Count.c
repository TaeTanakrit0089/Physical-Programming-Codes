#include "stdio.h"
#include "string.h"
#include "ctype.h"

int main() {
    char sook[151], text;
    scanf("%c", &text);
    scanf(" %[^\n]s", sook);

    int count = 0, size = strlen(sook);
    for (int i = 0; i < size; i++)
        if (tolower(sook[i]) == tolower(text)) count++;
    printf("%d", count);


}