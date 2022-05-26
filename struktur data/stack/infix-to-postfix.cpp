#include <bits/stdc++.h>
#include <stack>
using namespace std;
string postfix = "";
int Prioritas(char x){
    if(x == '+' || x == '-'){
        return 1;
    }else if(x == '*' || x == '/'){
        return 2;
    }else if(x == '^'){
        return 3;
    }else{
        return 0;
    }
}
void infixToPostfix(string x){
    stack<char> a;
    int i = 0;
    while(x[i] != '\0'){
        if(isalnum(x[i])){
            postfix += x[i];
            i++;
        }else if(x[i] == '('){
            a.push(x[i]);
            i++;
        }else if(x[i] == ')'){
            while(a.top() != '('){
                postfix += a.top();
                a.pop();
            }
            a.pop();
            i++;
        }else{
            while(!a.empty() && Prioritas(a.top()) >= Prioritas(x[i])){
                postfix += a.top();
                a.pop();
            }
            a.push(x[i]);
            i++;
        }
    }
    while(!a.empty()){
        postfix += a.top();
        a.pop();
    }
}
int main(){
    string infix;
    cout << "Inputkan karakter : ";
    getline(cin, infix);
    infixToPostfix(infix);
    cout << postfix;
    return 0;
}