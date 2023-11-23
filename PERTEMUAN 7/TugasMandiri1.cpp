#include <stdio.h>

int main() {
    int nilaiMahasiswa[10];

    printf("Masukkan 10 nilai mahasiswa:\n");
    for (int i = 0; i < 10; ++i) {
        printf("Nilai mahasiswa ke-%d: ", i + 1);
        scanf("%d", &nilaiMahasiswa[i]);
    }

    printf("\nDaftar nilai mahasiswa yang lulus:\n");
    for (int i = 0; i < 10; ++i) {
        if (nilaiMahasiswa[i] >= 60) {
            printf("Nilai mahasiswa ke-%d: %d\n", i + 1, nilaiMahasiswa[i]);
        }
    }

    return 0;
}
