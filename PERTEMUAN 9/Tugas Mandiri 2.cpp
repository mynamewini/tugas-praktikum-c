#include <stdio.h>

int main() {
    char A[10] = {'S', 'T', 'T', 'M', 'A', 'N', 'D', 'A', 'L', 'A'};
    char C;
    int count = 0;

    // Input karakter C
    printf("Masukkan bilangan integer = ");
    scanf(" %c", &C); 

    for (int i = 0; i < 10; i++) {
        if (A[i] == C) {
            count++;
        }
    }

    // Cetak hasil
    if (count > 0) {
        printf("ADA. Jumlah karakter '%c' dalam array: %d\n", C, count);
    } else {
        printf("TIDAK ADA.\n");
    }

    return 0;
}
