#include <iostream>
using namespace std;
struct Data{
    int data;
    Data *next;
}*head, *tail, *newnode, *cur, *del;
void push(){
    int data;
    cout << "Inputkan data : ";
    cin >> data;
    newnode = new Data();
    newnode->data = data;
    newnode->next = NULL;
    if(head == NULL){
        head = tail = newnode;
    }else{
        tail->next = newnode;
        tail = newnode;
    }
}
void delNode(){
    del = head;
    newnode = head->next;
    head = newnode;
    delete del;
}
void printLinkedList(){
    cur = head;
    int i = 0;
    if(cur == NULL){
        cout << "Queue masih kosong!!" << endl;
    }else{
        while(cur != NULL){
            cout << "| " << i << " |" <<  cur->data << "| " << i << " |" << endl;
            i++;
            cur = cur->next;
        }
    }
}
void menu(){
    int pilih;
    while(1){
        cout << "Menu : " << endl;
        cout << "1. Tambah data" << endl;
        cout << "2. Hapus data" << endl;
        cout << "3. Tampilkan data" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih menu : ";
        cin >> pilih;
        if(pilih == 1){
            push();
        }else if(pilih == 2){
            delNode();
        }else if(pilih == 3){
            printLinkedList();
        }else if(pilih == 4){
            cout << "Program telah berhenti!!" << endl;
            break;
        }else{
            cout << "Pilihan tidak ada!!" << endl;
        }
    }
}
int main(){
    menu();
    return 0;
}