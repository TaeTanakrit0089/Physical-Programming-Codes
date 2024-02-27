#include "stdio.h"
#include "ctype.h"
#include "string.h"

int main() {
    char sook[201], key_upper[] = "IWGZVFUTHSOJLKDECNMRQPYXBAIWGZVFUTHSOJLKDECNMRQPYXBA", key_lower[] = "iwgzvfuthsojlkdecnmrqpyxbaiwgzvfuthsojlkdecnmrqpyxba";
    scanf("%[^\n]s", sook);

    for (int i = 0; i < strlen(sook); i++) {
        char *key;

        if (isupper(sook[i]))
            key = key_upper;
        else if (islower(sook[i]))
            key = key_lower;

        for (int j = 0; j < strlen(key); j++) {
            if (sook[i] == key[j]) {
                sook[i] = key[(j + 5) % strlen(key)];
                break;
            }
        }
    }

    printf("%s", sook);
    return 0;
}
