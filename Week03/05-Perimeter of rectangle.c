#include "stdio.h"

int main(){
    float rec_w, rec_h;
    scanf("%f\n%f", &rec_w, &rec_h);

    printf("Perimeter of rectangle = %.4f units", 2 * (rec_w+rec_h));
}