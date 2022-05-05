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
    int a = 0;
    while(cur != NULL){
        if(cur->nama == nama){
            ++a;
            cout << "Nama " << nama << " ada pada node ke-" << a << endl;
            cout << "Dengan data : " << endl;
            cout << "Nama : " << cur->nama << endl;
            cout << "Umur : " << cur->umur << endl;
        }else{
          ++a;  
        }
        cur = cur->next;
    }
}
void searchUmur(int umur){
    cur = head;
    int a = 0;
    while(cur != NULL){
        if(cur->umur == umur){
            ++a;
            cout << "Umur " << umur << " ada pada node ke-" << a << endl;
            cout << "Dengan data : " << endl;
            cout << "Nama : " << cur->nama << endl;
            cout << "Umur : " << cur->umur << endl;
        }else{
          ++a;  
        }
        cur = cur->next;
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
    searchUmur(19);
    return 0;
}