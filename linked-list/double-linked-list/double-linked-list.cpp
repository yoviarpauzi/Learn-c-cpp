#include <iostream>
using namespace std;
int a = 0;
struct Data{
    string nama;
    int umur;
    Data *next, *prev;
}*head, *tail, *newnode, *cur, *del;
void addFirst(string nama, int umur){
    newnode = new Data();
    newnode->nama = nama;
    newnode->umur = umur;
    newnode->next = NULL;
    if(head == NULL){
        head = tail = newnode;
        newnode->prev = NULL;
    }else{
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
}
void addMiddle(string nama, int umur){
    newnode = new Data();
    newnode->nama = nama;
    newnode->umur = umur;
    cur = head;
    int posisi = 1;
    int b = 0;
    if(a % 2 == 0){
        b = a / 2;
    }else{
        b = a/ 2 + 1;
    }
    while(posisi < b){
        cur = cur->next;
        posisi++;
    }
    del = cur->next;
    newnode->next = cur->next;
    cur->next = newnode;
    newnode->prev = cur;
    del->prev = newnode;
    a++;
}
void addLast(string nama, int umur){
    newnode = new Data();
    newnode->nama = nama;
    newnode->umur = umur;
    newnode->next = NULL;
    if(head == NULL){
        head = tail = newnode;
        newnode->prev = NULL;
    }else{
        newnode->prev = tail;
        tail->next = newnode;
        tail = newnode;
    }
    a++;
}
void Sorted(){
    cur = head;
    Data *index;
    string temp;
    int temp1;
    while(cur != NULL){
        index = cur->next;
        while(index != NULL){
            if(cur->umur > index->umur){
                temp = cur->nama;
                cur->nama = index->nama;
                index->nama = temp;

                temp1 = cur->umur;
                cur->umur = index->umur;
                index->umur = temp1;
            }else if(cur->umur == index->umur){
                if(cur->nama > index->nama){
                    temp = cur->nama;
                    cur->nama = index->nama;
                    index->nama = temp;

                    temp1 = cur->umur;
                    cur->umur = index->umur;
                    index->umur = temp1;
                }
            }
            index = index->next;
        }
        cur = cur->next;
    }
}
void printFirst(){
    cur = head;
    while(cur != NULL){
        cout << "Nama : " << cur->nama << endl;
        cout << "Umur : " << cur->umur << endl;
        cur = cur->next;
    }
}
void printLast(){
    cur = tail;
    while(cur != NULL){
        cout << "Nama : " << cur->nama << endl;
        cout << "Umur : " << cur->umur << endl;
        cur = cur->prev;
    }
}
int main(){
    addLast("Yoviar Pauzi", 19);
    addLast("Misbahul Anam", 20);
    addMiddle("Saeful Anwar", 20);
    addLast("Seldi alansyah", 21);
    addFirst("Ahmad jakarya", 21);
    Sorted();
    printFirst();
    return 0;
}