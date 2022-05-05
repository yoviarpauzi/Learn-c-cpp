#include <iostream>
using namespace std;
#define N 5
int posisi = 0;
int a[5];
void push(int b){
    if(posisi == N - 1){
        cout << "Stack penuh, tidak bisa tambah data!!" << endl;
    }else{
         a[posisi] = b;
    }
    posisi++;
}
void change(int b){
    if(a[b] == 0){
        cout << "Antrian ke-" << b << " Kosong" << endl;
    }else if(posisi == 0){
        cout << "Stack kosong!!" << endl;
    }else{
        cout << "Inputkan nilai : ";
        cin >> a[b];
    }
}
void delFirst(){
    if(posisi == 0){
        printf("Stack Kosong");
    }else{
        for(int i = 0; i < posisi; i++){
            a[i] = a[i+1];
        }
    }
    posisi--;
}
void Sorted(){
    int temp;
    if(posisi == 0){
        cout << "Stack kosong!!" << endl;
    }else{
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N - i - 1; j++){
            if(a[j] < a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                }
            }
        }
    }
}
void display(){
    if(posisi == 0){
        cout << "Stack kosong" << endl;
    }else{
        for(int i = posisi - 1; i >= 0; i--){
            cout << a[i] << endl;
        }
    }
}
int main(){
    push(3);
    push(1);
    push(2);
    push(4);
    delFirst();
    display();
    return 0;
}