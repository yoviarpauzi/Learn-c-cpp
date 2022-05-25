#include <bits/stdc++.h>
using namespace std;
bool isOperator(char x){
	switch (x) {
	case '+':
	case '-':
	case '/':
	case '*':
    case '^':
		return true;
	}
	return false;
}
string postToPre(string x){
	stack<string> s;
	int length = x.size();
	for (int i = 0; i < length; i++) {
		if (isOperator(x[i])) {
			string operand1 = s.top();
			s.pop();
			string operand2 = s.top();
			s.pop();
			s.push(x[i] + operand2 + operand1);
		}else {
			s.push(string(1, x[i]));
		}
	}
	string a = "";
	while (!s.empty()) {
		a += s.top();
		s.pop();
	}
	return a;
}
int main(){
	string x;
    cout << "Inputkan karakter : ";
    getline(cin, x);
	cout << "Prefix : " << postToPre(x);
	return 0;
}
