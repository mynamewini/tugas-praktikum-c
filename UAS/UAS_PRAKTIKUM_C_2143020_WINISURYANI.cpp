#include <stdio.h>
#include <unistd.h>

void putarMotor(int kecepatan, int waktu) {
    printf("Motor berputar pada %d rpm\n", kecepatan);
    sleep(waktu);
}

void operasikanKatup(int waktu) {
    printf("Katup dibuka/ditutup\n");
    sleep(waktu);
}

int tentukanKecepatanMotor(int tingkatKekeruhan, int rataRataKekeruhan) {
    if (tingkatKekeruhan < rataRataKekeruhan - 6) {
        return 800; // Kecepatan rendah
    } else if (tingkatKekeruhan > rataRataKekeruhan + 6) {
        return 1200; // Kecepatan tinggi
    } else {
        return 1000; // Kecepatan normal
    }
}

void mengisiAir() {
    printf("Mengisi air mesin cuci\n");
    operasikanKatup(120); // 2 menit untuk mengisi air
}

void mencuci(int kecepatanMotor, int waktu) {
    printf("Memutar motor utama\n");
    putarMotor(kecepatanMotor, waktu);
}

void jeda(int waktu) {
    printf("Jeda tengah mencuci...\n");
    sleep(waktu);
}

void membuangAir() {
    printf("Membuang air kotor...\n");
    operasikanKatup(120); // 2 menit untuk membuang air
}

void mengeringkan(int rpm, int waktu) {
    printf("Memutar untuk mengeringkan...\n");
    putarMotor(rpm, waktu);
}

int main() {
    int tingkatKekeruhan[] = {6, 8, 12, 18, 24, 30, 36, 42, 49};
    int rataRataKekeruhan = 24; // Anggap tingkat kekeruhan rata-rata

    printf("Mesin cuci dihidupkan!\n"); // Mulai mesin cuci

    mengisiAir();

    printf("Mendeteksi tingkat kekeruhan\n");
    int tingkatTerdeteksi = tingkatKekeruhan[4]; // Anggap tingkat yang terdeteksi adalah 24

    int kecepatanMotor = tentukanKecepatanMotor(tingkatTerdeteksi, rataRataKekeruhan);

    mencuci(kecepatanMotor, 60); // 60 menit waktu mencuci

    jeda(120); // Jeda 2 menit

    membuangAir();

    mengeringkan(2000, 180); // 3 menit mengeringkan pada 2000 rpm

    mengisiAir();

    mencuci(kecepatanMotor, 60); // 60 menit waktu mencuci

    membuangAir();

    mengeringkan(2000, 180); // 3 menit mengeringkan pada 2000 rpm

    printf("Siklus mesin cuci selesai!\n");

    return 0;
}
