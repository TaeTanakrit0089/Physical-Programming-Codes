#include "stdio.h"
#include<string.h>
#include "ctype.h"

void bubbleSort(char arr[20][50], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                char temp[50];
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

int main() {
    char name_list[20][50];
    char temp1[50], temp2[50];
    for (int i = 0; i < 20; i++) {
        scanf("%s %s", temp1, temp2);
        for (int i = 0; i < strlen(temp1); i++) {
            if (isupper(temp1[i]))
                temp1[i] += 32;
        }
        temp1[0] -= 32;
        for (int i = 0; i < strlen(temp2); i++) {
            if (isupper(temp2[i]))
                temp2[i] += 32;
        }
        temp2[0] -= 32;

        strcpy(name_list[i], temp1);
        strcat(name_list[i], " ");
        strcat(name_list[i], temp2);
//        printf("%s", name_list[i]);
    }

    //Bubble Sort
    int n = sizeof(name_list) / sizeof(name_list[0]);
    bubbleSort(name_list, n);


    for (int i = 0; i < 20; i++)
        printf("%s\n", name_list[i]);

}