#include "stdio.h"
#include "string.h"
#include "ctype.h"

struct Weather {
    char outlook[9]; //outlook{overcast,sunny,rain}
    int temperature;
    int humidity;
    char wind; //wind{T,F}
};

void playing_decision(struct Weather sook);

int main() {
    int num;
    scanf("%d", &num);
    struct Weather sook[num];
    for (int i = 0; i < num; i++) scanf(" %s %d %d %c", sook[i].outlook, &sook[i].temperature, &sook[i].humidity, &sook[i].wind);
    for (int i = 0; i < num; i++) playing_decision(sook[i]);

}

void playing_decision(struct Weather sook) {
    if (strcmp(sook.outlook, "overcast") == 0) printf("yes");
    else if (strcmp(sook.outlook, "rain") == 0)
        if (tolower(sook.wind) == 'f') printf("yes"); else printf("no");
    else if (strcmp(sook.outlook, "sunny") == 0)
        if (sook.humidity <= 77.5) printf("yes"); else printf("no");
    printf("\n");
}