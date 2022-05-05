#include <iostream>
using namespace std;
struct Data{
    string nama;
    int umur;
    Data *next;
}*head, *tail, *curr, *newnode;
void addLast(string nama, int umur){
    newnode = new Data();
    newnode->nama = nama;
    newnode->umur = umur;
    newnode->next = NULL;
    if(head == NULL){
        head = tail = newnode;
    }else{
        tail->next = newnode;
        tail = newnode;
        tail->next = head;
    }
}
void addFirst(string nama, int umur){
    newnode = new Data();
    newnode->nama = nama;
    newnode->umur = umur;
    newnode->next = NULL;
    if(head == NULL){
        head = tail = newnode;
    }else{
        tail->next = newnode;
        newnode->next = head;
        head = newnode;
    }
}
void display(){
    curr = head;
    while(curr->next != head){
        cout << "Nama : " << curr->nama << endl;
        cout << "Umur : " << curr->umur << endl;
        curr = curr->next;
    }
    cout << "Nama : " << curr->nama << endl;
    cout << "Umur : " << curr->umur << endl;
}
int main(){
    addLast("Yoviar Pauzi", 19);
    addLast("Maulidani Rianturi", 20);
    addFirst("Misbahul Anam", 21);
    addFirst("Kabul Laksana", 22);
    display();
    return 0;
}