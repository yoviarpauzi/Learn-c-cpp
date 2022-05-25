#include <iostream>
#include <stack>
using namespace std;
bool isOperator(char x) {
    switch (x) {
    case '+':
    case '-':
    case '/':
    case '*':
    case '^':
    case '%':
        return true;
    }
    return false;
}
string preToInfix(string x) {
    stack<string> s;
    int length = x.size();
    for (int i = length - 1; i >= 0; i--) {
	    if (isOperator(x[i])) {
            string operand1 = s.top(); 
            s.pop();
            string operand2 = s.top(); 
            s.pop();
            s.push("(" + operand1 + x[i] + operand2 + ")");
	    }
	    else {
    	    s.push(string(1, x[i]));
	    }
    }
    return s.top();
}
int main() {
    string x;
    cout << "Inputkan karakter : ";
    getline(cin, x);
    cout << "Infix : " << preToInfix(x);
    return 0;
}
