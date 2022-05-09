#include <iostream>
#include <tuple>
using namespace std;
int main(){
    tuple<int, string>t1(19, "Yoviar Pauzi");
    tuple<int, string>t2(20, "Aisah");
    // display tuple
    cout << get<0>(t1) << endl;
    cout << get<1>(t1) << endl;
    // swap
    t1.swap(t2);
    // decompotion
    int x;
    string y;
    tie(x, y) = t1;
    cout << x << endl;
    cout << y << endl;
    return 0;
}