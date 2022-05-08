#include <iostream>
using namespace std;
int fibonacci(int a){
    if(a <= 1){
        return a;
    }else{
        return fibonacci(a - 1) + fibonacci(a - 2);
    }
}
int main(){
    cout << fibonacci(3) << endl;
    return 0;
}