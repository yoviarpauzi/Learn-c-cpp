#include <iostream>
using namespace std;
int a = 0;
struct Teman{
    string nama;
    int umur;
    Teman *next;
}*head, *tail, *newnode, *cur;
// Membuat node baru
void newNode(string nama, int umur){
    head = new Teman();
    head->nama = nama;
    head->umur = umur;
    tail = head;
    a++;
}
// Menambahkan node di awal
void addFirst(string nama, int umur){
    newnode = new Teman();
    newnode->nama = nama;
    newnode->umur = umur;
    newnode->next = head;
    head = newnode;
    a++;
}
// Menambahkan node di akhir
void addLast(string nama, int umur){
    newnode = new Teman();
    newnode->nama = nama;
    newnode->umur = umur;
    tail->next = newnode;
    tail = newnode;
    a++;
}
// Menambahkan node di tengah
void addMiddle(string nama, int umur){
    cur = head;
    int b = (a / 2) + 1;
    int posisi = 1;
    while(posisi < b){
        cur = cur->next;
        posisi++;
    }
    newnode = new Teman();
    newnode->nama = nama;
    newnode->umur = umur;
    newnode->next = cur->next;
    cur->next = newnode;
    a++;
}
//Prosedur untuk menampilkan node
void printLinkedList(){
    while(head != NULL){
        cout << "Nama : " << head->nama << endl;
        cout << "Umur : " << head->umur << endl;
        head = head->next;
    }
}
//Program utama
int main(){
    newNode("Afrizal", 20);
    addFirst("Misbahul Anam", 21);
    addLast("Maulidani Rianturi", 19);
    addMiddle("Rizki Dinihari", 22);
    addMiddle("Deni", 22);
    printLinkedList();
    return 0;
}
