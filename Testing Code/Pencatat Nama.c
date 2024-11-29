#include<stdio.h>

int main() {
typedef struct{
        char NamaLengkap[50];
        int NRP;
        char AsalJurusan[50];
}Mahasiswa;




for ( int i=0; i<=14;i++){
    Mahasiswa A;
    {

    printf("Masukkan nama ");
    scanf("%d", A.NamaLengkap);
    printf("Nama : %s\n", A.NamaLengkap);
    
    printf("Masukkan NRP ");
    scanf("%s", A.NRP);
    printf("Nama : %s\n", A.NRP);
    
    printf("Masukkan Jurusan ");
    scanf("%d", A.AsalJurusan);
    printf("Nama : %s\n", A.AsalJurusan);

    };
}
}