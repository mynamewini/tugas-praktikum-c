#include <stdio.h>

int main() {
    int bilangan;

    printf("Masukkan bilangan : ");
    scanf("%d", &bilangan);

    if (bilangan > 50) {
    bilangan -= 25;
    } else {
        bilangan += 10;
    }
 	printf("Hasil : %d\n", bilangan);
    return 0;
}
