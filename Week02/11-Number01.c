#include "stdio.h"

int main() {
    char number_in[30], number_out[6];
    scanf("%s", number_in);
    number_out[0] = number_in[2];
    number_out[1] = number_in[3];
    number_out[2] = number_in[4];
    number_out[3] = number_in[0];
    number_out[4] = number_in[1];
    number_out[5] = '\0';

    printf("%s", number_out);
}