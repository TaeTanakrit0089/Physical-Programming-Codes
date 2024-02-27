#include "stdio.h"
#include <ctype.h>

int main() {
    char sook[301], text_check, original_char;
    int found_list[301], found = 0;
    scanf("%[^\n]s", sook);
    scanf(" %c", &text_check);

    // Convert to Capital
    original_char = text_check;
    if (islower(text_check))
        text_check -= 32;

    for (int i = 0; i < 300; i++) {
        if (islower(sook[i]))
            sook[i] -= 32;
        if (sook[i] == text_check)
            found_list[found++] = i + 1;
    }

    if (found == 0)
        printf("Not found.");
    else {
        printf("There is/are %d \"%c\" in the above sentences.\n"
               "Position: ", found, original_char);
        for (int i=0;i<found-1;i++){
            printf("%d, ", found_list[i]);
        }
        printf("%d", found_list[found-1]);
    }
}