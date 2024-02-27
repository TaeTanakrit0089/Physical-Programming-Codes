#include "stdio.h"
#include "stdbool.h"
#include "string.h"

int main() {
    char sook[101], reverse[101];
    int count = 0, begin, end;
    scanf("%[^\n]s", sook);
    bool is_palindrome = true;

    while (sook[count] != '\0') {
        if (sook[count] != sook[strlen(sook) - count - 1])
            is_palindrome = false;
        count++;
    }

    if (is_palindrome)
        printf("It is Palindrome.");
    else
        printf("It is not Palindrome.");
}