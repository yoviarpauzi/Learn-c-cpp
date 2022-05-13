#include <iostream>
using namespace std;
#define N 100
int a, b, c, d, pilih;
int m1[N][N], m2[N][N], m3[N][N];
void inisialisasi(){
    input:
    cout << "Inputkan banyak baris Matriks 1 : ";
    cin >> a;
    cout << "Inputkan banyak kolom Matriks 1 : ";
    cin >> b;
    int m1[a][b];
    cout << endl;
    cout << "Inputkan banyak baris Matriks 2 : ";
    cin >> c;
    cout << "Inputkan banyak kolom Matriks 2 : ";
    cin >> d;
    int m2[c][d], m3[a][d];
    if(pilih == 1 || pilih == 2){
        if(a != b && c != d){
            system("cls");
            cout << "Ordo tidak sama!!" << endl;
            goto input;
        }
    }else if(pilih == 3){
        if(b != c){
            cout << "Kolom Matriks 1 harus sama dengan baris Matriks 2" << endl;
            goto input;
        }
    }
}
void variable(){
    system("cls");
    cout << "Matriks 1" << endl;
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            cout << "Inputkan nilai pada baris ke-" << i << " kolom ke-" << j << " : ";
            cin >> m1[i][j];
        }
        cout << endl;
    }
    system("cls");
    cout << "Matriks 2" << endl;
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            cout << "Inputkan nilai pada baris ke-" << i << " kolom ke-" << j << " : ";
            cin >> m2[i][j];
        }
        cout << endl;
    }
    system("cls");
}
void penjumlahan(){
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }
    cout << "Hasil penjumlahan kedua matriks : " << endl;
}
void pengurangan(){
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            m3[i][j] = m1[i][j] - m2[i][j];
        }
    }
    cout << "Hasil pengurangan kedua matriks : " << endl;
}
void perkalian(){
    for(int i = 0; i < a; i++){
        for(int j = 0; j < d; j++){
            m3[i][j] = 0;
            for(int k = 0; k < c; k++){
                m3[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    cout << "Hasil perkalian kedua matriks : " << endl;
}
void printMatriks(){
    for(int i = 0; i < a; i++){
        for(int j = 0; j < d; j++){
            cout << m3[i][j] << " ";
        }
        cout << endl;
    }
    system("pause");
    system("cls");
}
int main(){
    int pilih;
    while(1){
        cout << "Menu Matriks : " << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih menu : ";
        cin >> pilih;
        if(pilih == 1){
            inisialisasi();
            variable();
            penjumlahan();
            printMatriks();
        }else if(pilih == 2){
            inisialisasi();
            variable();
            pengurangan();
            printMatriks();
        }else if(pilih == 3){
            inisialisasi();
            variable();
            perkalian();
            printMatriks();
        }else if(pilih == 4){
            break;
        }else{
            cout << "Pilihan tidak ada!!" << endl;
        }
    }
    return 0;
}