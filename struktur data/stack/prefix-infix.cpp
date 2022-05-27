#include <bits/stdc++.h>
#include <stack>
using namespace std;
bool isOperator(char x){
    switch(x){
        case '+':
        case '-':
        case '*':
        case '/':
        case '^':
            return true;
    }
    return false;
}
string prefixToInfix(string x){
    stack<string> a;
    int length = x.length();
    for(int i = length - 1; i >= 0; i--){
        if(isOperator(x[i])){
            string operand1 = a.top();
            a.pop();
            string operand2 = a.top();
            a.pop();
            a.push("(" + operand1 + x[i] + operand2 + ")");
        }else{
            a.push(string(1, x[i]));
        }
    }
    return a.top();
}
int main(){
    string a;
    cout << "Inputkan karakter : ";
    getline(cin, a);
    cout << "Infix : " << prefixToInfix(a);
    return 0;
}