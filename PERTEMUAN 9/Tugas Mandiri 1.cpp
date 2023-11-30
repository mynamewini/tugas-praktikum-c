#include <stdio.h>

int main() {
    int A[11] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
    int N;

    // Input nilai N
    printf("Masukkan bilangan integer = ");
    scanf("%d", &N);

    int ada = 0; 
    for (int i = 0; i < 11; i++) {
        if (A[i] == N) {
            printf("ADA. Lokasi bilangan yang sama: %d\n", i);
            ada = 1; 
        }
    }

    // Jika nilai tidak ditemukan
    if (!ada) {
        printf("TIDAK ADA.\n");
    }

    return 0;
}
