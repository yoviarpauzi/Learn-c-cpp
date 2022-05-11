#include <iostream>
using namespace std;
void pola1(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void pola2(int n){
    for(int i = 0; i < n; i++){
        for(int j = n - 1; j >= i; j--){
            cout << "* ";
        }
        cout << endl;
    }
}
void pola3(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << "  ";
        }
        for(int k = n - 1; k >= i; k--){
            cout << "* ";
        }
        cout << endl;
    }
}
void pola4(int n){
    for(int i = 0; i < n; i++){
        for(int j = n - 1; j >= i; j--){
            cout << "  ";
        }
        for(int k = 0; k <= i; k++){
            cout << "* ";
        }
        cout << endl;
    }
}
void pola5(int n){
    for(int i = 0; i < n; i++){
        for(int j = n - 1; j >= i; j--){
            cout << "  ";
        }
        for(int k = 0; k <= i; k++){
            cout << "* ";
        }
        for(int l = i - 1; l >= 0; l--){
            cout << "* ";
        }
        cout << endl;
    }
}
void pola6(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << "  ";
        }
        for(int k = n - 2; k >= i; k--){
            cout << "* ";
        }
        for(int l = n - 1; l >= i; l--){
            cout << "* ";
        }
        cout << endl;
    }
}
void menu(int n){
    int pilih;
    cout << "Menu : " << endl;
    cout << "1. Pola 1" << endl;
    cout << "2. Pola 2" << endl;
    cout << "3. Pola 3" << endl;
    cout << "4. Pola 4" << endl;
    cout << "5. Pola 5" << endl;
    cout << "6. Pola 6" << endl;
    cout << "7. Keluar" << endl;
    while(1){
        cout << "Inputkan pilihan : ";
        cin >> pilih;
        switch (pilih)
        {
        case 1:
            pola1(n);
            break;
        case 2:
            pola2(n);
            break;
        case 3:
            pola3(n);
            break;
        case 4:
            pola4(n);
            break;
        case 5:
            pola5(n);
            break;
        case 6:
            pola6(n);
            break;
        case 7:
            exit(0);
            break;
        default:
            cout << "Pilihan tidak ada!!";
        }
    }
}
int main(){
    int n;
    cout << "Inputkan nilai : ";
    cin >> n;
    menu(n);
    return 0;
}