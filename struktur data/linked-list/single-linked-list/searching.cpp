#include <iostream>
using namespace std;
struct Data{
    string nama;
    int umur;
    Data *next;
}*head, *tail, *newnode, *cur;
void newNode(string nama, int umur){
    newnode = new Data();
    newnode->nama = nama;
    newnode->umur = umur;
    newnode->next = NULL;
    if(head == NULL){
        head = tail = newnode;
    }else{
        tail->next = newnode;
        tail = newnode;
    }
}
void searchNama(string nama){
    cur = head;
    int a = 0, b = 0;
    while(cur != NULL){
        if(cur->nama == nama){
            ++a;
        }
        cur = cur->next;
    }
    if (a > 0){
        while(cur != NULL){
            if(cur->nama == nama){
                ++b;
                cout << "Node dengan nama : " << nama << " ada pada node ke-" << b << endl;
            }
            cur = cur->next;
        }
    }else{
        cout << "Node dengan nama : " << nama << " tidak ada" << endl;
    }
}
void searchUmur(int umur){
    cur = head;
    int a = 0, b = 0;
    while(cur != NULL){
        if(cur->umur == umur){
            ++a;
        }
        cur = cur->next;
    }
    if (a > 0){
        while(cur != NULL){
            if(cur->umur == umur){
                ++b;
                cout << "Node dengan umur : " << umur << " ada pada node ke-" << b << endl;
            }
            cur = cur->next;
        }
    }else{
        cout << "Node dengan umur : " << umur << " tidak ada" << endl;
    }
}
void displayLinkedList(){
    while(head != NULL){
        cout << "Nama : " << head->nama << endl;
        cout << "Umur : " << head->umur << endl;
        head = head->next;
    }
}
int main(){
    newNode("Yoviar Pauzi", 19);
    newNode("Ahmad Jakarya", 21);
    newNode("Reza Arap", 19);
    searchNama("Ahmad");
    return 0;
}