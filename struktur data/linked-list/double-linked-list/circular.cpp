#include <iostream>
using namespace std;
struct Data{
    string nama;
    int umur;
    Data *next, *prev;
}*head, *tail, *cur, *newnode;
void addLast(string nama, int umur){
    newnode = new Data();
    newnode->nama = nama;
    newnode->umur = umur;
    newnode->next = NULL;     
    if(head == NULL){
        head = tail = newnode;
    }
    else{
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
        tail->next = head;
        head->prev = newnode;
    }
}
void addFirst(string nama, int umur){
    newnode = new Data();
    newnode->nama = nama;
    newnode->umur = umur;
    if(head == NULL){
        head = tail = newnode;
    }else{
        tail->next = newnode;
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
}
void display(){
    cur = head;
    while(cur->next != head){
        cout << "Nama : " << cur->nama << endl;
        cout << "Umur : " << cur->umur << endl;
        cur = cur->next;
    }
    cout << "Nama : " << cur->nama << endl;
    cout << "Umur : " << cur->umur << endl;
}
int main(){
    addLast("Misbahul Anam", 21);
    addFirst("Kabul Laksana", 22);
    display();
    return 0;
}