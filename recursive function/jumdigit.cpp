#include <iostream>
using namespace std;
int jumDigit(int a){
    if(a < 10){
        return a;
    }else{
        return a % 10 + jumDigit(a / 10);
    }
}
int main(){
    cout << jumDigit(1234) << endl;
    return 0;
}