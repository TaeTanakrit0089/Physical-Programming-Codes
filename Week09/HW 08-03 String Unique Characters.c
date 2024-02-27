#include "stdio.h"
#include "string.h"
#include "ctype.h"
#include "stdbool.h"

bool is_unique(char sook[]);

int main() {
    char sook[101], first_half[101] = "\0", temp[101];
    int first_half_count, count_repeated;
    scanf("%s", sook);

    bool is_repeated = false;
    char *location;
    while (!is_unique(sook)) {
        is_repeated = false;
        strcpy(first_half, "");
        first_half_count = 0;
        count_repeated = 0;
        for (int i = 0; i < strlen(sook) - 1; i++) {
            if (sook[i] == sook[i + 1]) {
                is_repeated = true;
                first_half[first_half_count] = '\0';
            }
            if (is_repeated && sook[i] != sook[i + 1]) {
                location = sook + i + 1;
                break;
            }
            if (!is_repeated)
                first_half[first_half_count++] = sook[i];
            else
                count_repeated++;
        }
        strcpy(temp, location);
        strcpy(sook, first_half);
        strcat(sook, temp);
        printf("%s\n", sook);
    }
}


bool is_unique(char *sook) {
    for (int i = 0; i < strlen(sook) - 1; i++)
        if (sook[i] == sook[i + 1])
            return false;
    return true;
}