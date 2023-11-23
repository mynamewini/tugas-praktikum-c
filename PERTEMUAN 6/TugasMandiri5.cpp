#include <stdio.h>

int main() {
    double jumlahUang = 1000000.0;
    double sukuBunga = 0.02;
    int jumlahBulan = 10;

    for (int i = 1; i <= jumlahBulan; ++i) {
        double bungaBulanIni = jumlahUang * sukuBunga;
        jumlahUang += bungaBulanIni;
        
        printf("Bulan %d: Jumlah uang=%.2f, Bunga=%.2f, Total=%.2f\n", i, jumlahUang, bungaBulanIni, jumlahUang + bungaBulanIni);
    }

    return 0;
}
