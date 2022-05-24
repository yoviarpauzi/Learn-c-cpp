#include <iostream>
#include <ctype.h>
#include <string.h>
using namespace std;
char stack[30];
int top = -1, back = 0;
void push(char b){
    stack[++top] = b;
}
char pop(){
    if(top == -1){
        return -1;
    }else{
        return stack[top--];
    }
}
int derajat(char b){
    if(b == '(')
        return 0;
    if(b == '+' || b == '-')
        return 1;
    if(b == '*' || b == '/')
        return 2;
    if(b == '^')
        return 3;
    return 0;
}
void view(char a[]){
    for(int i = 0; i < 4; i++){
        cout << a[i];
    }
    cout << a[back - 1];
}
void validasi(char a[]){
    char b, *c;
    int d = strlen(a);
    char e[d];
    c = a;
    while(*c != '\0')
    {
        if(isalnum(*c)){
            e[back] = *c;
            back++;
        }else if(*c == '('){
            push(*c);
        }else if(*c == ')'){
            while((b = pop()) != '(')
                e[back] = b;
                back++;
        }else{
            while(derajat(stack[top]) >= derajat(*c))
                e[back] = pop();
                back++;
            push(*c);
        }
        c++;
    }
    
    while(top != -1)
    {
        e[back] = pop();
        back++;
    }
    view(e);
}
int main(){
    char a[30];
    cout << "Inputkan infix : ";
    cin.getline(a, 30);
    validasi(a);
    return 0;
}