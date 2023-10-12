#include <stdio.h>

int main() {
    float celcius, fahrenheit, reamur;

    printf("Masukkan suhu dalam Celsius: ");
    scanf("%f", &celcius);

    fahrenheit = (celcius * 9/5) + 32;
    reamur = celcius * 4/5;

    printf("Suhu dalam Fahrenheit: %.2f\n", fahrenheit);
    printf("Suhu dalam Reamur: %.2f\n", reamur);

    return 0;
}
