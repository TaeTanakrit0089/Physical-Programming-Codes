#include "stdio.h"
#include "stdbool.h"

int main() {
    int i = 5, j = 36;
    float x = 0.001, y = 0.00, z = -81.753;
    char c = 'z', d = 'M';

    bool ans = (y - x) >= z;
    printf("%d", ans);

    return 0;
}