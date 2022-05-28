#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cout << "Inputkan karakter : ";
    getline(cin, a);
    int b = 1, d = 0, max = 0;
    for(int i = 0; a[i] != '\0'; i++){
        if(a[i] == ' '){
            ++b;
        }
    }
    string c[b];
    for(int i = 0; a[i] != '\0'; i++){
        if(a[i] == ' '){
            d++;
        }else{
            c[d] += a[i];
        }
    }
    for(int i = 0; i < b; i++){
        if(i == 0){
            max = c[i].length();
        }
        if(c[i].length() > max){
            max = c[i].length();
        }
    }
    for(int i = 0; i < max; i++){
        for(int j = 0; j < b; j++){
            if(c[j].length() < i){
                cout << "  ";
                continue;
            }else if(c[j][i] == '\0'){
                cout << "  ";
            }else{
                cout << c[j][i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}