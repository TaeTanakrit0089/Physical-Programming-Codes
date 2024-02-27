#include <string.h>
#include "stdio.h"

int main() {
    char firstname[30], lastname[30], id[9];
    int days, hours, years;
    float gpa;

    scanf("%s%s%s", firstname, lastname, id);
    scanf("%d/%d/%d", &days, &hours, &years);
    scanf("%f", &gpa);

    printf("Fullname: %s %s\n", firstname, lastname);
    printf("ID: %s\n", id);
    printf("DOB: %02d-%02d-%04d\n", days, hours, years);
    printf("GPA: %.2f", gpa);



}

