#include "stdio.h"
#include "ctype.h"
#include "string.h"

int main() {
    char sook[2001], i = 0, temp[4];
    scanf("%[^\n]s", sook);

    int size = strlen(sook), location[700], location_count = 0;
    for (int j = 0; j < size; j++) sook[j] = tolower(sook[j]);

    char *sooksan = sook;

    for (int i = 0; i < size; i++) {
        strncpy(temp, sooksan + i, 3);
        if (strcmp(temp, "cat") == 0)
            location[location_count++] = i;
    }
    if (location_count == 0) return 0;
//    printf("%d", count);
    for (int j = 0; j < location_count - 1; j++)
        printf("%d, ", location[j]);
    printf("%d", location[location_count - 1]);
}