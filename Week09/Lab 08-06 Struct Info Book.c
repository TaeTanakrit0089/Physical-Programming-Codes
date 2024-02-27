#include "stdio.h"
#include "ctype.h"
#include "string.h"

int main() {
    struct student_info {
        char name[100];
        char surname[100];
        char sex[10];
        int age;
        int id;
        float gpa;
    };
    struct student_info sooksan;

    scanf("%s %s %s %d %d %f", sooksan.name, sooksan.surname, sooksan.sex, &sooksan.age, &sooksan.id, &sooksan.gpa);

    if (strcmp(sooksan.sex, "Male") == 0)
        strcpy(sooksan.sex, "Mr");
    else
        strcpy(sooksan.sex, "Miss");

    printf("%s %.1s %s (%d) ID: %d GPA %.2f", sooksan.sex, sooksan.name, sooksan.surname, sooksan.age, sooksan.id, sooksan.gpa);

}