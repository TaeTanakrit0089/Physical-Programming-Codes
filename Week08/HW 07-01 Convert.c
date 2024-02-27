#include "stdio.h"
#include "stdbool.h"
#include "string.h"
#include "ctype.h"

void swap_character(char sook[102]);

void string_to_lower(char sook[102]);

int main() {
    char text1_in[102], text1_out[102], text2_in[102], text2_out[102], text1_lower[102], text2_lower[102];
    scanf("%[^\n]s", text1_in);
    scanf(" %[^\n]s", text2_in);
    strcpy(text1_out, text1_in);
    strcpy(text1_lower, text1_in);
    strcpy(text2_out, text2_in);
    strcpy(text2_lower, text2_in);
    swap_character(text1_out);
    swap_character(text2_out);
    string_to_lower(text1_lower);
    string_to_lower(text2_lower);
    printf("*** Results ***\n%s\n%s\n***************", text1_out, text2_out);
    if (strcmp(text1_lower, text2_lower) == 0)
        printf("\nBoth strings are the same.");
    else
        printf("\nBoth strings are not the same.");
}

void swap_character(char sook[102]) {
    for (int i = 0; i < strlen(sook); i++) {
        if (islower(sook[i]))
            sook[i] = toupper(sook[i]);
        else
            sook[i] = tolower(sook[i]);
    }
}

void string_to_lower(char sook[102]) {
    for (int i = 0; i < strlen(sook); i++)
        sook[i] = tolower(sook[i]);
}

