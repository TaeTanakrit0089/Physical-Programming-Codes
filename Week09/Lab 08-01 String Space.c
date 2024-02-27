#include <stdio.h>
#include <string.h>

int main() {
    char sook[151];
    scanf("%[^\n]s", sook);
    int count = 0, length = strlen(sook);
    for (int i = 0; i <= length; i++)
        if (sook[i] != ' ')
            sook[count++] = sook[i];
    sook[count] = '\0';
    printf("%s", sook);
}