#include<iostream>
using namespace std;
int a = 1;
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
void addLast(string nama, int umur){
    newnode = new Teman();
    newnode->nama = nama;
    newnode->umur = umur;
    tail->next = newnode;
    tail = newnode;
    tail->next = NULL;
    a++;
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
}
void printLinkedList(){
    cur = head;
    while(cur != NULL){
        cout << "Nama : " << cur->nama << endl;
        cout << "Umur : " << cur->umur << endl;
        cur = cur->next;
    }
}
int main(){
    newNode("Yoviar pauzi", 19);
    addLast("Misbahul Anam", 21);
    delLast();
    printLinkedList();
    return 0;
}