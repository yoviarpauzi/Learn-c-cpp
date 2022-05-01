#include<iostream>
using namespace std;
int a = 0;
struct Teman{
    string nama;
    int umur;
    Teman *next;
}*head, *tail, *newnode, *delnode, *cur;
void newNode(string nama, int umur){
    head = new Teman();
    head->nama = nama;
    head->umur = umur;
    tail = head;
    head->next = NULL;
    a++;
}
void addFirst(string nama, int umur){
    newnode = new Teman();
    newnode->nama = nama;
    newnode->umur = umur;
    newnode->next = head;
    head = newnode;
    a++;
}
void addMiddle(string nama, int umur){
    cur = head;
    int posisi = 1;
    int b = a / 2;
    while(posisi < b){
        cur = cur->next;
        posisi++;
    }
    newnode = new Teman();
    newnode->nama = nama;
    newnode->umur = umur;
    delnode = cur->next;
    cur->next = newnode;
    newnode->next = delnode;
    a++;
}
void addLast(string nama, int umur){
    newnode = new Teman();
    newnode->nama = nama;
    newnode->umur = umur;
    tail->next = newnode;
    tail = newnode;
    tail->next = NULL;
    a++;
}
void delFirst(){
    delnode = head;
    head = head->next;
    delete delnode;
    a--;
}
void delMiddle(){
    cur = head;
    int posisi = 1;
    int b = a;
    if (a % 2 == 0){
        b /= 2;
    }else{
        b = (b / 2) + 1;
    }
    while(posisi < b){
        cur = cur->next;
        posisi++;
    }
    delnode = cur->next;
    cur->next = cur->next->next;
    delete delnode;
    a--;
}
void delLast(){
    delnode = tail;
    cur = head;
    while(cur->next != tail){
        cur = cur->next;
    }
    tail = cur;
    tail->next = NULL;
    delete delnode;
    a--;
}
void changeFirst(string nama, int umur){
    delnode = head;
    cur = head->next;
    newnode = new Teman();
    newnode->nama = nama;
    newnode->umur = umur;
    newnode->next = cur;
    head = newnode;
    delete delnode;
}
void printLinkedList(){
    cur = head;
    while(cur != tail->next){
        cout << "Nama : " << cur->nama << endl;
        cout << "Umur : " << cur->umur << endl;
        cur = cur->next;
    }
}
int main(){
    newNode("Yoviar pauzi", 19);
    addLast("Misbahul Anam", 21);
    addFirst("Maulidani Rianturi", 18);
    addLast("Satria", 23);
    addMiddle("Dihak", 21);
    delMiddle();
    printLinkedList();
    return 0;
}