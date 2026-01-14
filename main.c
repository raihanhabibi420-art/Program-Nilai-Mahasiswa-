#include <stdio.h>

int main() {
    int i;
    int jumlah = 10;

    char nim[10][15];
    float tugas[10], uts[10], uas[10];

    printf("Masukkan jumlah mahasiswa (maks 30): %d\n\n", jumlah);

    /* INPUT DATA */
    for (i = 0; i < jumlah; i++) {
        printf("Mahasiswa ke-%d\n", i + 1);

        printf("NIM          : ");
        scanf("%s", nim[i]);

        printf("Nilai Tugas  : ");
        scanf("%f", &tugas[i]);

        printf("Nilai UTS    : ");
        scanf("%f", &uts[i]);

        printf("Nilai UAS    : ");
        scanf("%f", &uas[i]);

        printf("\n");
    }

    /* TAMPILKAN DATA */
    printf("\n===== DATA NILAI MAHASISWA =====\n");

    for (i = 0; i < jumlah; i++) {
        printf("\nMahasiswa ke-%d\n", i + 1);
        printf("NIM          : %s\n", nim[i]);
        printf("Nilai Tugas  : %.2f\n", tugas[i]);
        printf("Nilai UTS    : %.2f\n", uts[i]);
        printf("Nilai UAS    : %.2f\n", uas[i]);
        printf("-------------------------------\n");
    }

    printf("\nPROGRAM BERHASIL DIJALANKAN\n");

    return 0;
}

