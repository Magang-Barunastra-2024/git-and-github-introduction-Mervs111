#include<stdio.h>


// Enum digunakan untuk membuat sebuah variable mudah dikenali dan digunakan menggunakan angka
// int main(){
//     enum bulan{
//     Januari,    //0
//     Februari,   //1
//     Maret,      //2
//     April,      //3
//     Mei,        //4
//     Juni,       //5
//     Juli,       //6
//     Agustus,    //7
//     September,  //8
//     Oktober,    //9
//     November,   //10
//     Desember,   //11
//     };
//     enum bulan sekarang = April;
//     printf ("%d", sekarang);
// }

int main(){
    typedef struct {
        char merk [50];
        int tahun;
        char warna [50];
    }mobil;
    mobil A = {"Honda",2006,"Hitam"};
    printf("Merk : %s\n", A.merk);
    printf("Tahun : %d\n", A.tahun);    
    printf("Warna : %s\n", A.warna);

    
}