#include <iostream>
using namespace std;
int a = 0;
struct Data{
    string nama;
    int umur;
    Data *next, *prev;
}*head, *tail, *newnode, *cur, *del;
// Menambahkan node di depan
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
    a++;
}
// Menambahkan node di tengah
void addMiddle(string nama, int umur){
    newnode = new Data();
    newnode->nama = nama;
    newnode->umur = umur;
    cur = head;
    int posisi = 1;
    int b = a / 2;
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
// Menambahkan node di akhir
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
        tail->next = NULL;
    }
    a++;
}
// Ganti node awal
void changeFirst(string nama, int umur){
    newnode = new Data();
    newnode->nama = nama;
    newnode->umur = umur;
    cur = head->next;
    head = newnode;
    head->next = cur;
}
// Ganti node tengah
void changeMiddle(string nama, int umur){
    newnode = new Data();
    newnode->nama = nama;
    newnode->umur = umur;
    cur = head;
    int posisi = 1;
    int b = a / 2;
    if(b % 2 == 0){
        b--;
    }
    while(posisi < b){
        cur = cur->next;
        posisi++;
    }
    del = cur->next->next;
    cur->next = newnode;
    newnode->prev = cur;
    newnode->next = del;
}
// Ganti node akhir
void changeLast(string nama, int umur){
    newnode = new Data();
    newnode->nama = nama;
    newnode->umur = umur;
    del = tail->prev;
    newnode->prev = del;
    tail = newnode;
}
// Hapus node awal
void delFirst(){
    del = head;
    head = head->next;
    head->prev = NULL;
    delete del;
    a--;
}
// Hapus node tengah
void delMiddle(){
    cur = head;
    int posisi = 1;
    int b = a;
    if (b % 2 == 0){
        b = b / 2 - 1;
    }else{
        b = b / 2;
    }
    while(posisi < b){
        cur = cur->next;
        posisi++;
    }
    del = cur->next;
    newnode = cur->next->next;
    cur->next = newnode;
    newnode->prev = cur;
    delete del;
    a--;
}
// Hapus node akhir
void delLast(){
    del = tail;
    tail = tail->prev;
    tail->next = NULL;
    delete del;
    a--;
}
// Sorting berdasarkan umur
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
// Menampilkan node dari depan
void printFirst(){
    cur = head;
    while(cur != NULL){
        cout << "Nama : " << cur->nama << endl;
        cout << "Umur : " << cur->umur << endl;
        cur = cur->next;
    }
}
// Menampilkan node dari akhir
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
    addLast("Maulidani Rianturi", 21);
    addMiddle("Kabul Laksana", 21);
    changeMiddle("Deni", 21);
    addMiddle("Afrizal", 29);
    changeMiddle("Rizki Dinihari", 21);
    delMiddle();
    printFirst();
    return 0;
}