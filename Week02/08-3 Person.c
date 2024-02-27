#include "stdio.h"

int main() {
    char fname1[30], sname1[30], person2name[30], person2surname[30], person3name[30], person3surname[30];
    scanf("%s%s%s%s%s%s", fname1, sname1, person2name, person2surname, person3name, person3surname);
//    while (getchar() != '\n');

    printf("Person 1: %s %s\nPerson 2: %s %s\nPerson 3: %s %s", fname1, sname1, person2name, person2surname,
           person3name, person3surname);

}