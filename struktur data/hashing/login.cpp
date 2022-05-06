#include <iostream>
#include <ctype.h>
using namespace std;
int a = 0;
struct User{
    string nama, password;
}user[26];
void cekUser(string nama, string password){
    int index = tolower(password[0]) - 97;
    if(user[index].nama == "" && user[index].password == ""){
        user[index].nama = nama;
        user[index].password = password;
        cout << "Username & password berhasil ditambahkan ke database!!" << endl;
        a++;
    }else{
        cout << "Usernama atau password telah ada!!" << endl;
    }
}
void Daftar(){
    string nama, password;
    cout << "Inputkan username & password" << endl;
    cout << "Masukan username : ";
    getline(cin, nama);
    cout << "Masukan password : ";
    getline(cin, password);
    cekUser(nama, password);
}
void Login(){
    string nama, password;
    cout << "Inputkan username : ";
    getline(cin, nama);
    cout << "Inputkan password : ";
    getline(cin, password);
    for(int i = 0; i < 26; i++){
        if(user[i].nama == nama && user[i].password == password){
            cout << "Anda berhasil login!!" << endl;
        }else{
            cout << "Username atau password salah!!" << endl;
        }
    }
}
void Database(){
    if(a == 0){
        cout << "Database masih kosong!!" << endl;
    }else{
        for(int i = 0; i < 26; i++){
            cout << i + 1 << ". " << user[i].nama << " " << user[i].password << endl;
        }
    }
}
void menu(){
    string pilihan;
    while(1){
        cout << "Menu : " << endl;
        cout << "1. Daftar" << endl;
        cout << "2. Login" << endl;
        cout << "3. Cek Database" << endl; 
        cout << "4. Keluar" << endl;
        cout << "Pilih : ";
        cin >> pilihan;
        cin.ignore(1,'\n');
        if(pilihan == "1"){
            Daftar();
        }else if(pilihan == "2"){
            Login();
        }else if(pilihan == "3"){
            Database();
        }else if(pilihan == "4"){
            cout << "Program berhenti" << endl;
            break;
        }else{
            cout << "Pilihan tidak ada : ";
        }
    }
}
int main(){
    menu();
    return 0;
}