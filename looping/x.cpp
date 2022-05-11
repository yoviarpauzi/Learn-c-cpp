#include <iostream>
using namespace std;
int main(){
    int i, j, n;
    cout << "Inputkan nilai : ";
    cin >> n;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(j == i || j == n - i - 1){
                cout << "* ";
            }else if(i == 0 || j == 0){
                cout << "* ";
            }else if(i == n - 1 || j == n - 1){
                cout << "* ";
            }else{
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}