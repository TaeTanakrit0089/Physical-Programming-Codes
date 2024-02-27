#include <stdio.h>
#include <string.h>

int main() {
    char str[50], temp;
    int i, left, right, len;
    scanf("%[^\n]s", str);
    len = strlen(str);
    left = 0;
    right = len - 1;
    for (i = left; i < right; i++) {
        temp = str[i];
        str[i] = str[right];
        str[right] = temp;
        right--;
    }
    printf("%s", str);
}