#include "stdio.h"
#include "string.h"

int main() {
    struct Book {char id[10]; char name[100]; char author[100];};
    int num; scanf("%d", &num);
    char indexID[10]; scanf(" %s", indexID);
    struct Book sooksan[num];
    for (int i = 0; i < num; i++) scanf(" %s %s %s", sooksan[i].id, sooksan[i].name, sooksan[i].author);
    for (int i = 0; i < num; i++)
        if (strcmp(sooksan[i].id, indexID) == 0) {
            printf("%s %s %s", sooksan[i].id, sooksan[i].name, sooksan[i].author);
            return 0;
        }
    printf("Not Found");
}