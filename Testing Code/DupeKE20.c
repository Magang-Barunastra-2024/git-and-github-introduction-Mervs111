#include<stdio.h>
#include<string.h>

   typedef struct{
        char NamaLengkap[50];
        char NRP[15];
        char AsalJurusan[50];
    }Mahasiswa;



Mahasiswa input(){
Mahasiswa temp;
   
    do{
        printf("Masukkan nama \n");
        fgets(temp.NamaLengkap, sizeof (temp.NamaLengkap), stdin);
        temp.NamaLengkap[strcspn(temp.NamaLengkap, "\n")]= '\0';

        if(strlen(temp.NamaLengkap)== 0)
        {
            printf("Nama Tidak Boleh Kosong. mari di isi yaaa!\n");
        }
    
    }while (strlen(temp.NamaLengkap) == 0);
    
   

    do{
        printf("Masukkan NRP \n");
        fgets(temp.NRP, sizeof (temp.NRP), stdin);
        temp.NRP[strcspn(temp.NRP, "\n")]= '\0';

            if (strlen(temp.NRP) > 10)
            {
                printf("NRP Tidak boleh melebihi 10 Angka, Arek ITS Bukan sih?\n");
            }
        
    }while (strlen(temp.NRP) > 10);
    
    do{
        printf("Masukkan Jurusan \n");
        fgets(temp.AsalJurusan, sizeof (temp.AsalJurusan), stdin);
        temp.AsalJurusan[strcspn(temp.AsalJurusan, "\n")]= '\0';

         if(strlen(temp.AsalJurusan)== 0)
        {
            printf("Jurusan Tidak Boleh Kosong. mari di isi yaaa!\n");
        }
        
    }while (strlen(temp.AsalJurusan) > 10);

    return temp;
}

void output(Mahasiswa temp){
    printf("Nama : %s\n", temp.NamaLengkap);
    printf("NRP : %s\n", temp.NRP);
    printf("Jurusan : %s\n", temp.AsalJurusan);
}
void JurusanSama(Mahasiswa barun[],int size)
{
    for (int i=0;i<size;i++)
    {
        int found = 0;
        for(int j=0;j<i;j++)
        {
            if(strcmp(barun[i].AsalJurusan, barun[j].AsalJurusan ) == 0)
            {
                found = 1;
                break;
            }
        }
        if (found)
            continue;
        printf ("Member dari jurusan :%s\n",barun[i].AsalJurusan);
        for (int j = 0; j < size; j++)
        {
            if(strcmp(barun[i].AsalJurusan, barun[j].AsalJurusan) == 0)
            {
                printf("-%s \n", barun[j].NamaLengkap);
            }
        }
            
    } 
}
int main (){
    Mahasiswa temp [3];
    for (int i=0;i<3;i++){
        printf("Input Member ELC Ke-%d\n", i + 1);
        temp[i]= input();
    }
    for (int i=0;i<3;i++){
        printf("Input Member ELC Ke-%d\n", i + 1);
        output(temp[i]);
    }

    printf ("\nDaftar Member Jurusan yang Sama:\n");
    JurusanSama(temp,3);

    return 0;
}
