#include <bits/stdc++.h>
using namespace std;
string ConvertStringToInt(int a){
    ostringstream convert;
    convert << a;
    string c = convert.str();
    reverse(c.begin(), c.end());
    string hasil;
    for(int i = 0; i < c.length(); i++){
        if((i + 1) % 3 == 0 && i != c.length() - 1){
            hasil += c[i];
            hasil += ".";
        }else{
            hasil += c[i];
        }
    }
    reverse(hasil.begin(), hasil.end());
    return hasil;
}
int main(){
    int diamond, harga = 200;
    cout << "Inputkan banyak diamond : ";
    cin >> diamond;
    harga *= diamond;
    cout << "Harga Diamond : " << ConvertStringToInt(harga);
    return 0;
}