#include "stdio.h"
#include "string.h"

struct Record {char id[10]; char name[100]; long salary; long sales;};

int main() {
    int num;
    scanf("%d", &num);
    char laongdao[10];
    struct Record sooksan[num];
    for (int i = 0; i < num; i++) scanf(" %s %s %ld %ld", sooksan[i].id, sooksan[i].name, &sooksan[i].salary, &sooksan[i].sales);
    scanf(" %s", laongdao);
    for (int i = 0; i < num; i++)
        if (strcmp(laongdao, sooksan[i].id) == 0) {
            printf("%s\n%s\n%ld\n%.2f\n%ld\n%.2f", sooksan[i].id, sooksan[i].name, sooksan[i].sales,
                   sooksan[i].sales * 0.02, sooksan[i].salary, (sooksan[i].sales * 0.02) + sooksan[i].salary);
            return 0;
        }
    printf("ID not found !!!");
}