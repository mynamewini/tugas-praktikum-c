#include <stdio.h>
#include <math.h>

int main() {
    double alas, tinggi, sisi_miring;

    printf("Masukkan panjang sisi alas (cm): ");
    scanf("%lf", &alas);
    
    printf("Masukkan panjang sisi tinggi (cm): ");
    scanf("%lf", &tinggi);

    sisi_miring = sqrt(alas * alas + tinggi * tinggi);

    printf("Panjang sisi miring segitiga: %.2lf cm\n", sisi_miring);

    return 0;
}
