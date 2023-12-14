#include <stdio.h>

int main() {
    // Inisialisasi array A dengan nilai mahasiswa
    int A[12] = {60, 80, 55, 90, 75, 40, 50, 85, 70, 65, 45, 55};

    // Inisialisasi array B dan C
    int B[12], C[12];

    // Menghitung rata-rata nilai mahasiswa dari array A
    int sum = 0;
    for (int i = 0; i < 12; i++) {
        sum += A[i];
    }
    double rata_rata = (double)sum / 12;

    // Pindahkan nilai A ke B atau C sesuai dengan kondisi
    int idxB = 0, idxC = 0;
    for (int i = 0; i < 12; i++) {
        if (A[i] > rata_rata) {
            B[idxB++] = A[i];
        } else {
            C[idxC++] = A[i];
        }
    }

    // Menampilkan isi array A
    printf("Array A: ");
    for (int i = 0; i < 12; i++) {
        printf("%d ", A[i]);
    }

    // Menampilkan isi array B
    printf("\nArray B: ");
    for (int i = 0; i < idxB; i++) {
        printf("%d ", B[i]);
    }

    // Menampilkan isi array C
    printf("\nArray C: ");
    for (int i = 0; i < idxC; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}
