#include <stdio.h>

int main() {
    int kecepatan = 2;
    int waktu = 100;

    printf("Deret Jarak Selama 100 detik:\n");
    for (int i = 1; i <= waktu; ++i) {
        int jarak = kecepatan * i;
        printf("%d ", jarak);

        if (i % 10 == 0) {
            printf("\n");
        }
    }

    printf("\n");

    return 0;
}
