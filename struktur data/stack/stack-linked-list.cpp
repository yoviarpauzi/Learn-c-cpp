#include <iostream>
using namespace std;
#define N 5
int posisi = 0;
struct Data{
    string nama;
    int umur;
    Data *next;
}*head, *tail, *curr, *newnode, *del;
void newNode(string nama, int umur){
    if(posisi >= N - 1){
        cout << "Stack penuh!!" << endl; 
    }else{
        newnode = new Data();
        newnode->nama = nama;
        newnode->umur = umur;
        newnode->next = NULL;
        if(head == NULL){
            head = tail = newnode;
        }else{
            newnode->next = head;
            head = newnode;
        }
        posisi++;
    }
}
void delStack(){
    del = head;
    curr = head->next;
    head = curr;
    delete del;
}
void display(){
    if(head == NULL){
        cout << "Stack kosong!!" << endl;
    }else{
        curr = head;
        while(curr != NULL){
            cout << "Nama : " << curr->nama << endl;
            cout << "Umur : " << curr->umur << endl;
            curr = curr->next;
        }
    }
}
int main(){
    newNode("Yoviar Pauzi", 19);
    newNode("Ahmad Jakarya", 20);
    delStack();
    display();
    return 0;
}