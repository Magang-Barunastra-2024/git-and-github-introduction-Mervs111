#include <stdio.h>

int main()
{
    // struct Namanya
    // {
    //     Tipedata Variable1;
    //     Tipedata Variable2;
    // };

    struct Orang
    {
        char Nama[50];
        int Umur;
        float Gaji;
    };

    // struct Orang A = {"Budi", 99, 99.99};

    // printf("Nama : %s\n", A.Nama);
    // printf("Umur : %d\n", A.Umur);
//     // printf("Gaji Sebesar :%.2f Juta\n", A.Gaji);

// typedef struct
//     {
//         char Merk[50];
//         int Tahun;
//         char Warna[50];
//     }Mobil;

//     Mobil A = {"Honda",1989,"Hitam"}
//     printf("Merk : %s\n", A.Merk);
//     printf("Tahun : %d\n", A.Tahun);
//     printf("Warna :%s \n", A.Warna);

    

    // typedef struct
    // {
    //     char Merk[50];
    //     int Tahun;
    //     char Warna[50];
    // }Mobil;

    // Mobil satu = {"Honda",1989,"Hitam"};
    // printf("Merk : %s\n", satu.Merk);
    // printf("Tahun : %d\n", satu.Tahun);
    // printf("Warna :%s \n", satu.Warna);

    struct Orang A;

    printf("Masukkan nama ");
    scanf("%s", A.Nama);
    printf("Nama : %s\n", A.Nama);

    printf("Masukkan Umur: ");
    scanf("%d", &A.Umur);
    printf("Umur : %d\n", A.Umur);

    printf("Masukkan Gaji: ");
    scanf("%f", &A.Gaji);
    printf("Gaji Sebesar :%.2f Juta\n", A.Gaji);

}