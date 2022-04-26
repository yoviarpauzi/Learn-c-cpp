#include <stdio.h>
struct Identitas{
    char nama[40], alamat[40];
    int umur;
}Identitas[5];
int main(){
    for(int i = 0; i < 2; i++){
        printf("Inputkan nama : ");
        scanf(" %39[^\n]s", &Identitas[i].nama);
        printf("Inputkan umur : ");
        scanf("%i", &Identitas[i].umur);
        printf("Inputkan alamat : ");
        scanf(" %39[^\n]s", &Identitas[i].alamat);
        printf("\n");
    }
    for(int i = 0; i < 2; i++){
        printf("Nama : %s\n", Identitas[i].nama);
        printf("Umur : %i\n", Identitas[i].umur);
        printf("Alamat : %s\n\n", Identitas[i].alamat);
    }
    return 0;
}