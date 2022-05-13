#include <iostream>
using namespace std;
void pertambahan(){
    int a, b, c, d;
    input:
    cout << "Inputkan banyak baris Matriks 1 : ";
    cin >> a;
    cout << "Inputkan banyak kolom Matriks 1 : ";
    cin >> b;
    int m1[a][b], m3[a][b];
    cout << endl;
    cout << "Inputkan banyak baris Matriks 2 : ";
    cin >> c;
    cout << "Inputkan banyak kolom Matriks 2 : ";
    cin >> d;
    int m2[c][d];
    if(a != b && c != d){
        cout << "Ordo kedua Matriks berbeda!!" << endl;
        goto input;
    }else{
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
        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
                m3[i][j] = m1[i][j] + m2[i][j];
            }
            cout << endl;
        }
        system("cls");
        cout << "Hasil pertambahan kedua matriks : " << endl;
        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
                cout << m3[i][j] << " ";
            }
            cout << endl;
        }
    }
    system("pause");
}
void pengurangan(){
    int a, b, c, d;
    input:
    cout << "Inputkan banyak baris Matriks 1 : ";
    cin >> a;
    cout << "Inputkan banyak kolom Matriks 1 : ";
    cin >> b;
    int m1[a][b], m3[a][b];
    cout << endl;
    cout << "Inputkan banyak baris Matriks 2 : ";
    cin >> c;
    cout << "Inputkan banyak kolom Matriks 2 : ";
    cin >> d;
    int m2[c][d];
    if(a != b && c != d){
        cout << "Ordo kedua Matriks berbeda!!" << endl;
        goto input;
    }else{
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
        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
                m3[i][j] = m1[i][j] - m2[i][j];
            }
            cout << endl;
        }
        system("cls");
        cout << "Hasil pengurangan kedua matriks : " << endl;
        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
                cout << m3[i][j] << " ";
            }
            cout << endl;
        }
    }
    system("pause");
}
void perkalian(){
    int a, b, c, d;
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
    if(b != a){
        cout << "Kolom Matriks 1 harus sama dengan baris Matriks 2" << endl;
        goto input;
    }else{
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
        for(int i = 0; i < a; i++){
            for(int j = 0; j < d; j++){
                m3[i][j] = 0;
                for(int k = 0; k < c; k++){
                    m3[i][j] += m1[i][k] * m2[k][j];
                }
            }
        }
        system("cls");
        cout << "Hasil perkalian kedua matriks : " << endl;
        for(int i = 0; i < a; i++){
            for(int j = 0; j < d; j++){
                cout << m3[i][j] << " ";
            }
            cout << endl;
        }
    }
    system("pause");
}
void pembagian(){
    int a, b, c, d;
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
    if(b != a){
        cout << "Kolom Matriks 1 harus sama dengan baris Matriks 2" << endl;
        goto input;
    }else{
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
        for(int i = 0; i < a; i++){
            for(int j = 0; j < d; j++){
                m3[i][j] = 0;
                for(int k = 0; k < c; k++){
                    m3[i][j] += m1[i][k] / m2[k][j];
                }
            }
        }
        system("cls");
        cout << "Hasil pembagian matriks : " << endl;
        for(int i = 0; i < a; i++){
            for(int j = 0; j < d; j++){
                cout << m3[i][j] << " ";
            }
            cout << endl;
        }
    }
    system("pause");
}
int main(){
    int pilih;
    while(1){
        cout << "Menu Matriks : " << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilih menu : ";
        cin >> pilih;
        if(pilih == 1){
            pertambahan();
        }else if(pilih == 2){
            pengurangan();
        }else if(pilih == 3){
            perkalian();
        }else if(pilih == 4){
            pembagian();
        }else if(pilih == 5){
            break;
        }else{
            cout << "Pilihan tidak ada!!" << endl;
        }
    }
    return 0;
}