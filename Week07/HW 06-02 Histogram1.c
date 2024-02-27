#include <stdbool.h>
#include "stdio.h"
#include "ctype.h"

void bubbleSort(char arr[], int n) {
    int i, j;
    char temp;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}


int main() {
    int num;
    char current;
    scanf("%d", &num);
    char sook[num];

    for (int i = 0; i < num; i++) {
        scanf(" %c", &current);
        sook[i] = tolower(current);
    }
    bubbleSort(sook, num);

    // count
    int count = 1;
    for (int i = 0; i < num - 1; i++) {
        if (sook[i] != sook[i + 1]) {
            printf("%c: %d\n", sook[i], count);
            count = 0;
        }
        count++;
    }
    printf("%c: %d", sook[num - 1], count);

}