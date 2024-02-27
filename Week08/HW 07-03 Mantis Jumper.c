#include "stdio.h"


int count_one(int *sooksan, int size);

int main() {
    int size, result = 0, temp, count = 0;
    scanf("%d", &size);
    int sooksan[size];
    for (int i = 0; i < size; i++)
        sooksan[i] = 1;
    while (count_one(sooksan, size) > 1) {
        printf("%d\n", size);
        count = 1;
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; size - i - 1; j++)
                if (sooksan[i] > sooksan[i + 1]) {
                    temp = sooksan[i];
                    sooksan[i] = sooksan[i + 1];
                    sooksan[i + 1] = temp;
                    count++;
                }
        }

        printf("\n*****\n");

        sooksan[0] = 2;
        for (int i = 1; i < size; i++) {
            printf("%d ", sooksan[i]);
            sooksan[i] = sooksan[i + 1];
        }
        for (int i = 0; i < size - 1; i++) {
            if (sooksan[i] > sooksan[i + 1]) {
                temp = sooksan[i];
                sooksan[i] = sooksan[i + 1];
                sooksan[i + 1] = temp;
            }
        }
        for (int i = 0; i < size; i++)
            sooksan[i] = sooksan[size - i];
        printf("\n*****\n");
        result += count;
        size--;
    }
    printf("method = %d", result);


}

int count_one(int *sooksan, int size) {
    int result = 0;
    for (int i = 0; i < size; i++)
        if (sooksan[i] == 1) result++;
    printf("result = %d\n", result);
    return result;

}
