#include "stdio.h"
#include "math.h"
#include "stdbool.h"

int main() {
    float original_price, discount_rate, result;
    int buy_amount;
    scanf("%f\n%f\n%d", &original_price, &discount_rate, &buy_amount);
    float num1 = original_price / 100 * (100 - discount_rate) * buy_amount,
            num2 = ((original_price * 2) * floor(buy_amount / 3)) + ((buy_amount % 3) * original_price);
    printf("%f %f", num1, num2);
    if (num1 > num2) {
        result = num2;
        printf("Buy 2 Get 1");
    } else {
        result = num1;
        printf("Discount %.0f%%", discount_rate);
    }
    printf("\n%.2f", result);
}