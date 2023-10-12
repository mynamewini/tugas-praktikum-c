#include <stdio.h>
#include <math.h>

int main() {
    double alas, tinggi, sisi1, sisi2, sisi3, luas, keliling;

    printf("Masukkan panjang alas segitiga (cm): ");
    scanf("%lf", &alas);
    printf("Masukkan tinggi segitiga (cm): ");
    scanf("%lf", &tinggi);

    sisi1 = sqrt(pow(alas / 2, 2) + pow(tinggi, 2));
    sisi2 = sisi1;
    sisi3 = alas;

    luas = 0.5 * alas * tinggi;

    keliling = sisi1 + sisi2 + sisi3;


    printf("Luas segitiga: %.2lf cm^2\n", luas);
    printf("Keliling segitiga: %.2lf cm\n", keliling);

    return 0;
}