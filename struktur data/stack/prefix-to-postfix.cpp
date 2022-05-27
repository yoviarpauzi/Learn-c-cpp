#include <bits/stdc++.h>
#include <stack>
using namespace std;
bool isOperator(char x){
    if(x == '+' || x == '-')
        return true;
    if(x == '*' || x == '/')
        return true;
    if(x == '^')
        return true;
    return false;
}
string prefixToPostfix(string x){
    stack<string> a;
    int length = x.length();
    for(int i = length - 1 ;i >= 0; i--){
        if(isOperator(x[i])){
            string operand1 = a.top();
            a.pop();
            string operand2 = a.top();
            a.pop();
            a.push(operand1 + operand2 + x[i]);
        }else{
            a.push(string(1, x[i]));
        }
    }
    return a.top();
}
int main(){
    string prefix;
    cout << "Inputkan karakter : ";
    getline(cin, prefix);
    cout << "Postfix : " << prefixToPostfix(prefix);
    return 0;
}