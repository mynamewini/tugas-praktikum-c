#include <stdio.h>

int main() {
    // Mencetak deret angka 1 hingga 1024 dengan selisih pengalian 2
    int num = 1;
    for (int i = 0; i <= 10; ++i) {
        printf("%d ", num);
        num *= 2;
    }

    // Mencetak baris baru setelah mencetak deret angka
    printf("\n");

    return 0;
}
