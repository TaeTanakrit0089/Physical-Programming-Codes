#include "stdio.h"
#include "ctype.h"

double celsiusToFahrenheit(double celcius);

double fahrenheitToCelcius(double fahrenheit);

void printFarenheit(double fahrenheit);

void printCelcius(double celcius);

int main() {
    double sook;
    char unit;
    scanf("%lf %c", &sook, &unit);
    if (tolower(unit) == 'c')
        printFarenheit(celsiusToFahrenheit(sook));
    else
        printCelcius(fahrenheitToCelcius(sook));
}

double celsiusToFahrenheit(double celcius) {
    return (celcius * 9.0 / 5.0) + 32;
}

double fahrenheitToCelcius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

void printFarenheit(double fahrenheit) {
    printf("%.2f f", fahrenheit);
}

void printCelcius(double celcius) {
    printf("%.2f c", celcius);
}

