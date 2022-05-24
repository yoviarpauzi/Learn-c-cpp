#include <iostream>
#include <cctype>
#include <string.h>
using namespace std;
char stack[100];
int top = -1, back = -1;
void push(char a){
    stack[++top] = a;
}
void view(char a[]){
    strrev(a);
    char *b = a;
    while(*b != '\0'){
        if(isalnum(*b)){
            cout << *b;
        }else if(*b == '+' || *b == '-'){
            cout << *b;
        }else if(*b == '*' || *b == '/'){
            cout << *b;
        }else if(*b == '^'){
            cout << *b;
        }
        b++;
    }
}
char pop(){
    if(top == -1){
        return -1;
    }else{
        return stack[top--];
    }
}
int derajat(char a){
    if(a == '('){
        return 0;
    }else if(a == '+' || a == '-'){
        return 1;
    }else if(a == '*' || a == '/'){
        return 2;
    }else if(a == '^'){
        return 3;
    }else{
        return 0;
    }
}
void prefix(char *x, int n){
    char b, c[n];
    while(*x != '\0'){
        if(isalnum(*x)){
            c[++back] = *x;
        }else if(*x == '('){
            push(*x);
        }else if(*x == ')'){
            while((b = pop()) != '('){
                c[++back] = b;
            }
        }else{
            while(derajat(stack[top]) >= derajat(*x)){
                c[++back] = pop();
            }
            push(*x);
        }
        x++;
    }
    while(top != -1){
        c[++back] = pop();
    }
    view(c);
}
int main(){
    char a[100];
    cout << "Inputkan karakter : ";
    cin.getline(a, 100);
    int n = strlen(a);
    strrev(a);
    for(int i = 0; i < n; i++){
        if(a[i] == '('){
            a[i] = ')';
        }else if(a[i] == ')'){
            a[i] = '(';
        }
    }
    char *b = a;
    prefix(b, n);
    return 0;
}