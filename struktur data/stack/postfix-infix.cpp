#include <bits/stdc++.h> 
using namespace std; 
string postfixToInfix(string a){ 
    stack<string> s; 
    for(int i=0; a[i]!='\0'; i++){ 
        if(isalnum(a[i])){ 
           string operand(1, a[i]); 
           s.push(operand); 
        }else{ 
            string operand1 = s.top(); 
            s.pop(); 
            string operand2 = s.top(); 
            s.pop(); 
            s.push("(" + operand2 + a[i] + operand1 + ")"); 
        } 
    } 
    return s.top(); 
} 
int main(){
    string a;
    cout << "Inputkan karakter : ";
    getline(cin, a); 
    cout<< "Infix : " <<postfixToInfix(a); 
    return 0; 
}