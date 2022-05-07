#include <iostream>
using namespace std;
int pangkatIterasi(int a, int b){
    int c = a;
    for(int i = 0; i < b - 1; i++){
        a *= c;
    }
    return a;
}
int pangkatRekursif(int a, int b){
    if(b <= 1){
        return a;
    }else{
    return a * pangkatRekursif(a, (b-1));
    }
}
int kaliRekursif(int a, int b){
    if(b == 1){
        return a;
    }else if(b == 0){
        return a * 0;
    }else{
        return a + kaliRekursif(a, (b-1));
    }
}
int jumDigit(int a){
    if(a != 0){
        return (a % 10) + jumDigit(a / 10);
    }else{
        return 0;
    }
}
int faktorialRekursif(int a){
    if(a == 1){
        return a;
    }else if(a == 0){
        return a;
    }else{
        return a * faktorialRekursif(a - 1);
    }
}
int main(){
    cout << pangkatRekursif(2, 3) << endl;
    cout << pangkatIterasi(2,4) << endl;
    cout << kaliRekursif(2, 1) << endl;
    cout << jumDigit(234) << endl;
    cout << faktorialRekursif(5) << endl;
    return 0;
}