#include <stdio.h>
#include <string.h>
#define MAX_NRP_LENGTH 10
typedef struct
{
    char NamaLengkap[50];
    char NRP[15];
    char AsalJurusan[50];
} Mahasiswa;

Mahasiswa input()
{
    Mahasiswa temp;
    printf("Masukkan nama: ");
    scanf("%s", temp.NamaLengkap);
    printf("Nama: %s\n", temp.NamaLengkap);

    printf("Masukkan NRP: ");
    scanf("%s", temp.NRP);
    printf("NRP: %s\n", temp.NRP);

    printf("Masukkan Jurusan: ");
    scanf("%s", temp.AsalJurusan);
    printf("Jurusan: %s\n", temp.AsalJurusan);

    return temp;
}

void output(Mahasiswa temp)
{
    printf("Nama: %s\n", temp.NamaLengkap);
    printf("NRP: %s\n", temp.NRP);
    printf("Jurusan: %s\n", temp.AsalJurusan);
}
void JurusanYGSAMA(Mahasiswa barun[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int found = 0;
        for (int j = 0; j < i; j++)
        {
            if (strcmp(barun[i].AsalJurusan, barun[j].AsalJurusan) == 0)
            {
                found = 1;
                break;
            }
        }
        if (found)
            continue;

        printf("\nMahasiswa dari Jurusan: %s\n", barun[i].AsalJurusan);
        for (int j = 0; j < size; j++)
        {
            if (strcmp(barun[i].AsalJurusan, barun[j].AsalJurusan) == 0)
            {
                printf("- %s\n", barun[j].NamaLengkap);
            }
        }
    }
}
void inputNRP(char *nrp)
{
    while (1)
    {
        printf("Masukkan NRP (maksimal 10 karakter): ");
        fgets(nrp, MAX_NRP_LENGTH + 2, stdin);

        size_t len = strlen(nrp);
        if (nrp[len - 1] == '\n')
        {
            nrp[len - 1] = '\0';
            len--;
        }

        if (len > MAX_NRP_LENGTH)
        {
            printf("NRP Mana ini Cuy? AREK ITS Bukan?\n");
        }
        else
        {
            break;
        }
    }
}
int main()
{
    Mahasiswa temp[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Input data untuk mahasiswa ke-%d\n", i + 1);
        temp[i] = input();
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\nData mahasiswa ke-%d:\n", i + 1);
        output(temp[i]);
    }

    printf("\n--- Daftar mahasiswa berdasarkan Jurusan ---\n");
    JurusanYGSAMA(temp, 5);

    return 0;
}