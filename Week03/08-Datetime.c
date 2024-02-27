#include "stdio.h"
#include "math.h"


int main() {
    int seconds_in, seconds, minutes, hours, days;
    scanf("%d", &seconds_in);
    minutes = floor(seconds_in / 60);
    seconds = seconds_in % 60;
    hours = floor(minutes / 60);
    minutes = minutes % 60;
    days = floor(hours / 24);
    hours = hours % 24;

    printf("%d s = %d d %d h %d m %d s", seconds_in, days, hours, minutes, seconds);
}