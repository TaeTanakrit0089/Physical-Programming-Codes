#include "stdio.h"
#include "string.h"
#include "ctype.h"
#include "stdbool.h"

int main() {
    struct student_info { char name[100]; char surname[100]; char sex[10]; int age; char id[10]; float gpa;};
    struct student_info sooksan[20], temp;
    char option[10];
    bool compare;

    for (int i = 0; i < 20; i++) {
        scanf(" %s %s %s %d %s %f", sooksan[i].name, sooksan[i].surname, sooksan[i].sex, &sooksan[i].age, sooksan[i].id, &sooksan[i].gpa);
        if (strcmp(sooksan[i].sex, "Male") == 0) strcpy(sooksan[i].sex, "Mr"); else strcpy(sooksan[i].sex, "Miss");
    }
    scanf(" %s", option); for (int i = 0; i < strlen(option); i++) option[i] = tolower(option[i]);
    for (int i = 0; i < 20; i++)
        for (int j = 0; j < 20 - i - 1; j++) {
            if (strcmp(option, "name") == 0) compare = strcmp(sooksan[j].name, sooksan[j + 1].name) > 0;
            else if (strcmp(option, "surname") == 0) compare = strcmp(sooksan[j].surname, sooksan[j + 1].surname) > 0;
            else if (strcmp(option, "id") == 0) compare = strcmp(sooksan[j].id, sooksan[j + 1].id) > 0;

            if (compare) {temp = sooksan[j]; sooksan[j] = sooksan[j + 1]; sooksan[j + 1] = temp;}
        }
    for (int i = 0; i < 20; i++)
        printf("%s %.1s %s (%d) ID: %s GPA %.2f\n", sooksan[i].sex, sooksan[i].name, sooksan[i].surname, sooksan[i].age, sooksan[i].id, sooksan[i].gpa);
}