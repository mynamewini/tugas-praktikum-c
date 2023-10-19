#include <stdio.h>

int main() {
    int kode;
	char jenis;
    double harga, diskon, harga_setelah_diskon;

	printf("Kode : ");
	scanf(" %i", &kode);
    printf("Jenis (A/B/C): ");
    scanf(" %c", &jenis);

    printf("Harga: ");
    scanf("%lf", &harga);

    switch (jenis) {
        case 'A':
            diskon = 0.10; // Diskon 10% untuk barang jenis A
            break;
        case 'B':
            diskon = 0.15; // Diskon 15% untuk barang jenis B
            break;
        case 'C':
            diskon = 0.20; // Diskon 20% untuk barang jenis C
            break;
        default:
            printf("Jenis barang tidak ada. Masukkan A, B, atau C.\n");
            return 1; 
    }

    harga_setelah_diskon = harga - (harga * diskon);

    printf("Jenis Barang %c mendapat diskon = %.0lf%%, Harga setelah diskon: %.0lf\n", jenis, diskon * 100, harga_setelah_diskon);

    return 0; 
}
