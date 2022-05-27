#include <bits/stdc++.h>
#include <stack>
using namespace std;
string postfixToPrefix(string x){
    stack<string> a;
    for(int i = 0; x[i] != '\0'; i++){
        if(isalnum(x[i])){
            a.push(string(1, x[i]));
        }else{
            string operand1 = a.top();
            a.pop();
            string operand2 = a.top();
            a.pop();
            a.push(x[i] + operand2 + operand1);
        }
    }
    return a.top();
}
int main(){
    string postfix;
    cout << "Inputkan karakter : ";
    getline(cin, postfix);
    cout << "Prefix : " << postfixToPrefix(postfix);
}