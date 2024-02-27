#include "stdio.h"
#include "ctype.h"
#include "string.h"

int main() {
    char sook[201];
    scanf("%[^\n]s", sook);

    int space_location;
    for (int i = 0; i < strlen(sook); i++)
        if (isblank(sook[i])) space_location = i;
    printf("%c.%c.", sook[0], sook[space_location + 1]);

}