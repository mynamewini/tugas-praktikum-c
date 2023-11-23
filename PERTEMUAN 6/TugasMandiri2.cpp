#include <stdio.h>

int main() {
    // Mencetak deret angka 100 hingga 55 dengan selisih -5
    for (int i = 100; i >= 55; i -= 5) {
        printf("%d ", i);
    }

    // Mencetak baris baru setelah mencetak deret angka
    printf("\n");

    return 0;
}
