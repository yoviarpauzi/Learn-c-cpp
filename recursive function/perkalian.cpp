#include<iostream>
using namespace std;
int perkalian(int a, int b){
    if(b == 0){
        return 0;
    }else{
        return a + perkalian(a , b - 1);
    }
}
int main(){
    cout << perkalian(2, 3) << endl;
    return 0;
}