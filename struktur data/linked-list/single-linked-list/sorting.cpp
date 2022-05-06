#include <iostream>
#include <string.h>
using namespace std;
int a = 0;
struct Teman{
    char nama[30];
    int tanggal, bulan, tahun;
    Teman *next;
}*head, *tail, *cur, *temp, *index, *newnode;
void sorted(struct Teman *a, struct Teman *b){
    char nama[30];
    int tanggal, bulan, tahun;

    strcpy(nama, a->nama);
    strcpy(a->nama, b->nama);
    strcpy(b->nama, nama);

    tanggal = a->tanggal;
    a->tanggal = b->tanggal;
    b->tanggal = tanggal;

    bulan = a->bulan;   
    a->bulan = b->bulan;
    b->bulan = bulan;

    tahun = a->tahun;
    a->tahun = b->tahun;
    b->tahun = tahun;
}
int newNode(char *nama, int tanggal, int bulan, int tahun){
    newnode = new Teman();
    strcpy(newnode->nama, nama);
    newnode->tanggal = tanggal;
    newnode->bulan = bulan;
    newnode->tahun = tahun;
    newnode->next = NULL;
    if(head == NULL){
        head = tail = newnode;
    }
    else{
        tail->next = newnode;
        tail = newnode;
    }
}
void sortLinkedList(){
    cur = head;
    index = NULL;
    char nama[40];
    int tanggal = 0, bulan = 0, tahun = 0;
    while(cur != NULL){
        index = cur->next;
        while(index != NULL){
            if(cur->bulan > index->bulan){
                sorted(cur, index);
            }else if(cur->bulan == index->bulan){
                if(cur->tanggal == index->tanggal){
                    sorted(cur, index);
                }else if(cur->tanggal == index->tanggal){
                    if(cur->nama > index->nama){
                        sorted(cur, index);
                    }
                }
            }
            index = index->next;
        }
        cur = cur->next;
    }
}
void printLinkedList(){
    cur = head;
    while(cur != NULL){
        cout << cur->nama << " ";
        cout <<  cur->tanggal << "-";
        cout << cur->bulan << "-";
        cout << cur->tahun << endl;
        cur = cur->next;
    }
}
int main(){
    FILE *fp = fopen("teman.txt", "r");
    char nama[30];
    char tanggal[30];
    int ttl, bulan, tahun, a = 0;
    while(1){
        if(feof(fp)){
            break;
        }
        fscanf(fp, "%[^#]#%[^\n]\n", nama, tanggal);
        sscanf(tanggal, "%i-%i-%i", &ttl, &bulan, &tahun);
        newNode(nama, ttl, bulan, tahun);
        a++;
    }
    sortLinkedList();
    printLinkedList();
    fclose(fp);
    return 0;
}