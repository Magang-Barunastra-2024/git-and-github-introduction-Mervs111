#include<stdio.h>
   
   typedef struct Catetan{
        char NamaLengkap[50];
        int NRP[15];
        char AsalJurusan[50];
    }Mahasiswa;



Mahasiswa input(){
Mahasiswa temp;
    printf("Masukkan nama \n");
    scanf("%d",temp.NamaLengkap);
    printf("Nama : %s\n", temp.NamaLengkap);
    
    printf("Masukkan NRP \n");
    scanf("%s", temp.NRP);
    printf("NRP : %s\n", temp.NRP);
    
    printf("Masukkan Jurusan \n");
    scanf("%d", temp.AsalJurusan);
    printf("Jurusan : %s\n", temp.AsalJurusan);
};
void output(Mahasiswa temp){
    printf("Nama : %s\n", temp.NamaLengkap);
    printf("NRP : %s\n", temp.NRP);
    printf("Jurusan : %s\n", temp.AsalJurusan);
};

int main (){
    Mahasiswa temp [5];
    for (int i=0;i<=5;i++);

    temp[5] = input();


    for(int i = 0;i<=2;i++){

    }
}
