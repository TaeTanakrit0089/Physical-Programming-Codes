#include "stdio.h"
#include "string.h"

int main() {
    char sook[201], temp;

    scanf("%[^\n]s", sook);
    int size = strlen(sook);
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (sook[j] > sook[j + 1]) {
                temp = sook[j];
                sook[j] = sook[j + 1];
                sook[j + 1] = temp;
            }
    printf("%s", sook);
}