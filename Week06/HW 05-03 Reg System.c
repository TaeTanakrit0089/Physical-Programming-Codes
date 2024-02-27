#include "stdio.h"

int main() {
    float temp_age, temp_height, temp_weight;
    float all_age = 0, all_height = 0, all_weight = 0, condi1 = 0, condi2 = 0, condi3 = 0, condi4 = 0;
    for (int i = 0; i < 50; i++) {
        scanf("%f %f %f", &temp_age, &temp_height, &temp_weight);

        all_age += temp_age; all_height += temp_height; all_weight += temp_weight;

        if (temp_age >= 20 && temp_height >= 160)
            condi1++;
        if (temp_age < 20 && (temp_height <= 180 || temp_weight >= 60))
            condi2++;
        if (temp_age >= 30 && (temp_weight >= 40 && temp_weight <= 80))
            condi3++;
        if (temp_age < 40 && (temp_weight < 85 || temp_height <= 200))
            condi4++;
    }
    printf("Age >= 20 and Height >= 160: %.0f", condi1);
    printf("\nAge < 20 and Height <= 180 or Weight >= 60: %.0f", condi2);
    printf("\nAge >= 30 and Weight >= 40 and Weight <= 80: %.0f", condi3);
    printf("\nAge < 40 and Weight < 85 or Height <= 200: %.0f", condi4);

    printf("\nAverage Age: %.0f", all_age / 50);
    printf("\nAverage Height: %.2f", all_height / 50);
    printf("\nAverage Weight: %.2f", all_weight / 50);
}