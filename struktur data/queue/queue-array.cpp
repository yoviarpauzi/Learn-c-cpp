#include <iostream>
using namespace std;
#define N 5
int posisi = 0;
struct Data{
    int data;
}data[N];
void push(){
 if(posisi == N-1){
     cout << "Queue penuh!!" << endl;
 }else{
     cout << "Inputkan data : ";
     cin >> data[posisi].data;
     cin.ignore(1, '\n');
     cout << "Data berhasil ditambahkan ke Queue!!" << endl;
     posisi++;
 }   
}
void del(){
    if(posisi == 0){
        cout << "Queue masih kosong!!" << endl;
    }else{
        for(int i = 0; i < posisi; i++){
            data[i].data = data[i+1].data;
        }
        cout << "Data paling depan berhasil dihapus!!" << endl;
        posisi--;
    }
}
void printArray(){
    if(posisi == 0){
        cout << "Queue masih kosong!!" << endl;
    }else{
        for(int i = 0; i < posisi; i++){
            cout << "| " << i << " |" <<  data[i].data << "| " << i << " |" << endl;
        }
    }
}
void menu(){
    string pilih;
    while(1){
        cout << "Menu : " << endl;
        cout << "1. Tambah data" << endl;
        cout << "2. Hapus data" << endl;
        cout << "3. Tampilkan data" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih Menu : ";
        getline(cin, pilih);
        if(pilih == "1"){
            push();
        }else if(pilih == "2"){
            del();
        }else if(pilih == "3"){
            printArray();
        }else if(pilih == "4"){
            cout << "Program telah berhenti!!" << endl;
        }else{
            cout << "Pilihan tidak ada!!" << endl;
        }
    }
}
int main(){
    menu();
    return 0;
}