#include <iostream>
using namespace std;
void hello(int a){
    if(a == 0){
        exit(0);
    }else{
        cout << "Hello world!!" << endl;
        hello(a - 1);
    }
}
int main(){
    hello(3);
    return 0;
}