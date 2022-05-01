#include <iostream>
#include <string.h>
using namespace std;
int a = 0;
struct Teman{
    char nama[30];
    int tanggal, bulan, tahun;
    Teman *next;
}*head, *tail, *cur, *temp, *index, *newnode;
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
                strcpy(nama, cur->nama);
                strcpy(cur->nama, index->nama);
                strcpy(index->nama, nama);

                tanggal = cur->tanggal;
                cur->tanggal = index->tanggal;
                index->tanggal = tanggal;

                bulan = cur->bulan;
                cur->bulan = index->bulan;
                index->bulan = bulan;

                tahun = cur->tahun;
                cur->tahun = index->tahun;
                index->tahun = tahun;
            }else if(cur->bulan == index->bulan){
                if(cur->tanggal == index->tanggal){
                    strcpy(nama, cur->nama);
                    strcpy(cur->nama, index->nama);
                    strcpy(index->nama, nama);

                    tanggal = cur->tanggal;
                    cur->tanggal = index->tanggal;
                    index->tanggal = tanggal;

                    bulan = cur->bulan;
                    cur->bulan = index->bulan;
                    index->bulan = bulan;

                    tahun = cur->tahun;
                    cur->tahun = index->tahun;
                    index->tahun = tahun;
                }else if(cur->tanggal == index->tanggal){
                    if(cur->nama > index->nama){
                        strcpy(nama, cur->nama);
                        strcpy(cur->nama, index->nama);
                        strcpy(index->nama, nama);

                        tanggal = cur->tanggal;
                        cur->tanggal = index->tanggal;
                        index->tanggal = tanggal;

                        bulan = cur->bulan;
                        cur->bulan = index->bulan;
                        index->bulan = bulan;

                        tahun = cur->tahun;
                        cur->tahun = index->tahun;
                        index->tahun = tahun;
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
    while(a < 5){
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