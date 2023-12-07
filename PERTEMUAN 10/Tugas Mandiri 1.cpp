#include <stdio.h>

int main() {
    int A[5] = {12, 8, 17, 5, 15};
    int B[7] = {5, 11, 7, 25, 9, 12, 14};
    int C[12] = {0};
    
    int indexC = 0;
    for (int i = 0; i < 5; i++) {
        if (A[i] > 10) {
            C[indexC] = A[i];
            indexC++;
        }
    }
    
    for (int i = 0; i < 7; i++) {
        if (B[i] > 10) {
            C[indexC] = B[i];
            indexC++;
        }
    }
    
    printf("Isi array C setelah disalin (digabungkan):\n");
    for (int i = 0; i < indexC; i++) {
        printf("%d ", C[i]);
    }
    
    return 0;
}
