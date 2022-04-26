#include <iostream>
using namespace std;
struct Identitas{
    char nama[30];
    int umur;
};
int main(){
    struct Identitas data[2];
    for(int i = 0; i < 2; i++){
        cout << "Inputkan nama : ";
        cin.getline(data[i].nama, 30);
        cout << "Inputkan umur : ";
        cin >> data[i].umur;
        cin.ignore(1, '\n');
    }
    for(int i = 0; i < 2; i++){
        cout << data[i].nama << endl;
        cout << data[i].umur << "\n\n";
    }
}