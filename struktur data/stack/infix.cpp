#include <iostream>
#include <ctype.h>
using namespace std;
char stack[100];
int top = -1;
void push(char x){
    stack[++top] = x;
}
char pop(){
    if(top == -1){
        return -1;
    }else{
        return stack[top--];
    }
}
int derajat(char x){
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    if(x == '^')
        return 3;
    return 0;
}
void validasi(char x[]){
    char *a, b;
    a = x;
    while(*a != '\0'){
        if(isalnum(*a)){
            cout << *a << " ";
        }else if(*a == '('){
            push(*a);
        }else if(*a == ')'){
            while((b = pop()) != '(')
                cout << b << " ";
        }else{
            while(derajat(stack[top]) >= derajat(*a))
                cout << pop() << " ";
            push(*a);
        }
        a++;
    }
    while(top != -1){
        cout << pop() << " ";
    }
}
int main(){
    char a[100];
    cout << "Inputkan karakter : ";
    cin >> a;
    validasi(a);
}