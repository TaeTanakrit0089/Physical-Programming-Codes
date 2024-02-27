#include "stdio.h"
#include "string.h"
#include "stdbool.h"

bool is_unique(char sooksan[]);

int main() {
    char sooksan[150], temp[150]; int temp_count = 0; bool is_repeated = false;
    scanf("%[^\n]s", sooksan);
    while (!is_unique(sooksan)) {
        is_repeated = false; temp_count = 0;
        for (int i = 0; i < strlen(sooksan); i++) {
            if (is_repeated && sooksan[i] != sooksan[i + 1]) {
                i++;
                is_repeated = false;
            }
            if (sooksan[i] == sooksan[i + 1]) is_repeated = true;
            else temp[temp_count++] = sooksan[i];
        }
        temp[temp_count] = '\0'; strcpy(sooksan, temp);
        printf("%s\n", sooksan);
    }
}

bool is_unique(char *sooksan) {
    if (strlen(sooksan) <= 1) return true;
    for (int i = 0; i < strlen(sooksan) - 1; i++) if (sooksan[i] == sooksan[i + 1]) return false;
    return true;
}