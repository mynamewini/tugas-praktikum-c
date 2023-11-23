#include <stdio.h>

int main() {
    int A[11];
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};
    int index = 0;

    printf("Data dalam dokumen:\n");

    for (int i = 0; i < 11; i++) {
        if (data[i] % 2 == 0) {
            A[index] = data[i];
            index++;
        }
    }

    printf("Isi array setelah penyimpanan nilai genap:\n");
    for (int i = 0; i < index; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}