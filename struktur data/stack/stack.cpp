#include <iostream>
#include <string.h>
using namespace std;
#define N 5
int data[N];
int posisi = 0;
void push(int a){
    if(posisi > N - 1){
        cout << "Stack penuh!!" << endl;
    }else{
        data[posisi] = a;
        posisi++;
    }
}
void delStack(){
    if(posisi == 0){
        cout << "Stack Kosong!!" << endl;
    }else{
        data[posisi - 1] = 0;
        posisi--;
    }
}
void display(){
    if(posisi == 0){
        cout << "Stack kosong!!" << endl;
    }else{
        for(int i = posisi - 1; i >= 0; i--){
            cout << "|" << i << "|  " <<  data[i] << "  |" << i << "|" << endl;
        }
    }
}
int main(){
    push(1);
    push(3);
    push(4);
    push(2);
    push(8);
    delStack();
    push(10);
    push(4);
    display();
    return 0;
}