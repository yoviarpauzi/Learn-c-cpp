#include <iostream>
using namespace std;
void hanoi(int x, char a, char c, char b){
    if(x == 1){
        cout << "Pindahkan disc 1 dari " << a << " ke " << c << endl;
    }else{
        hanoi(x - 1, a, b, c);
        cout << "Pindahkan disc " << x << " dari " << a << " ke " << c << endl;
        hanoi(x - 1, b, a, c);
    }
}
int main(){
    int x;
    cout << "Inputkan banyaknya piringan : ";
    cin >> x;
    hanoi(x, 'a', 'c', 'b');
    return 0;
}