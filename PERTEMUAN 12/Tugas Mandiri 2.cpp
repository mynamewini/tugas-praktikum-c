#include <stdio.h>

int main() {
    // Inisialisasi array A dengan huruf kapital tanpa spasi
    char A[11] = {'J', 'O', 'G', 'J', 'A', 'K', 'A', 'R', 'T', 'A', '\0'};

    // Inisialisasi array untuk menghitung frekuensi kemunculan huruf
    int count[26] = {0};

    // Menghitung frekuensi kemunculan huruf dalam array A
    for (int i = 0; A[i] != '\0'; i++) {
        if (A[i] >= 'A' && A[i] <= 'Z') {
            count[A[i] - 'A']++;
        }
    }

    // Mencari huruf dengan frekuensi tertinggi
    int maxFrequency = 0;
    char hurufTerbanyak;

    for (int i = 0; i < 26; i++) {
        if (count[i] > maxFrequency) {
            maxFrequency = count[i];
            hurufTerbanyak = 'A' + i;
        }
    }

    // Menampilkan hasil
    printf("Huruf yang muncul terbanyak: %c\n", hurufTerbanyak);
    printf("Jumlah huruf tersebut: %d\n", maxFrequency);

    return 0;
}
