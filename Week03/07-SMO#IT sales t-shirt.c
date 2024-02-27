#include "stdio.h"

int main() {
    float original_price, discount_rate, buy_amount;
    scanf("%f\n%f\n%f", &original_price, &discount_rate, &buy_amount);

    printf("%.2f", original_price / 100 * (100-discount_rate) * buy_amount);
}