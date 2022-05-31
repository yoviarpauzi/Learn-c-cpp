#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Inputkan nilai : ";
    cin >>n;
    int f0 = 1, f1 = 0, fibo = 0;
    for(int i = 0; i < n; i++){
        fibo  = f0 + f1;
        f0 = f1;
        f1 = fibo;
        cout << f0 << " ";
    }    
    return 0;
}