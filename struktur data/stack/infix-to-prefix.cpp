#include <bits/stdc++.h>
#include <stack>
using namespace std;
string prefix = "";
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
            prefix += x[i];
            i++;
        }else if(x[i] == ')'){
            a.push(x[i]);
            i++;
        }else if(x[i] == '('){
            while(a.top() != ')'){
                prefix += a.top();
                a.pop();
            }
            a.pop();
            i++;
        }else{
            while(!a.empty() && Prioritas(a.top()) >= Prioritas(x[i])){
                prefix += a.top();
                a.pop();
            }
            a.push(x[i]);
            i++;
        }
    }
    while(!a.empty()){
        prefix += a.top();
        a.pop();
    }
}
int main(){
    string infix;
    cout << "Inputkan karakter : ";
    getline(cin, infix);
    reverse(infix.begin(), infix.end());
    infixToPostfix(infix);
    reverse(prefix.begin(), prefix.end());
    cout << prefix;
    return 0;
}