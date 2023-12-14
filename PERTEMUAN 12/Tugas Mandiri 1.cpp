#include <stdio.h>

int main() {
    // Inisialisasi array A dengan huruf kapital tanpa spasi
    char A[8] = {'J', 'A', 'K', 'A', 'R', 'T', 'A', '\0'};

    // Memeriksa apakah ada huruf yang sama dalam array A
    int i, j;
    int adaHurufSama = 0;  // Flag untuk menandakan apakah ada huruf yang sama
    char hurufSama;       // Untuk menyimpan huruf yang sama pertama kali ditemukan

    for (i = 0; A[i] != '\0' && !adaHurufSama; i++) {
        for (j = i + 1; A[j] != '\0' && !adaHurufSama; j++) {
            if (A[i] == A[j]) {
                adaHurufSama = 1;
                hurufSama = A[i];
            }
        }
    }

    // Jika ada huruf yang sama
    if (adaHurufSama) {
        printf("ADA\nHuruf yang sama: %c\n", hurufSama);
    } else {
        printf("TIDAK ADA\n");
    }

    return 0;
}
