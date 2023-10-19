#include <stdio.h>

int main() {
    int jam_masuk, jam_keluar, lama_parkir, biaya_parkir;

    printf("Program Menghitung Biaya Parkir\n");

    printf("Jam masuk (1-12): ");
    scanf("%d", &jam_masuk);

    printf("Jam keluar (1-12): ");
    scanf("%d", &jam_keluar);

    if (jam_keluar < jam_masuk) {
        jam_keluar += 12; // Menambahkan 12 jam untuk mengatasi jam keluar yang lebih kecil
    }

    lama_parkir = jam_keluar - jam_masuk;

    if (lama_parkir <= 2) {
        biaya_parkir = 2000;
    } else {
        biaya_parkir = 2000 + 500 * (lama_parkir - 2);
    }
    
    printf("Lama parkir: %d jam\n", lama_parkir);
    printf("Biaya parkir: %d\n", biaya_parkir);

    return 0;
}