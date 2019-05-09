#include <iostream>
#include <string>
#include <stack>

using namespace std;

int Precedence(char C) {
	if(C == '^') return 3;
	if((C == '*') || (C == '/')) return 2;
	if((C == '-') || (C == '+')) return 1;
	return -1;
}

int main() {
	int N;
	cin >> N;
	while(N--) {
		string Infix, Posfix = "";
		cin >> Infix;
		stack<char> S;
		for(auto C : Infix) {
			if(C != '+' && C != '-' && C != '*' && C != '/' && C != '(' && C != ')' && C != '^') {
				Posfix.push_back(C);
			} else {
				if(C == '(') {
					S.push(C);
				} else if(C == ')') {
					while(!S.empty() && S.top() != '(') {
						Posfix.push_back(S.top());
						S.pop();
					}
					if(S.top() == '(') {
						S.pop();
					}
				} else {
					while(!S.empty() && (Precedence(C) <= Precedence(S.top()))) {
						Posfix.push_back(S.top());
						S.pop();
					}
					S.push(C);
				}
			}
		}
		while(!S.empty()) {
			Posfix.push_back(S.top());
			S.pop();
		}
		cout << Posfix << endl;
	}
	
	return 0;
}

/*
((a+b)*C-(D-e))^(f-g) harusnya jadi ab+C*De--fg-^ malah jadi ab+CDe--fg-^*


A^B*C+E/F/(G-H) harusnya jadi AB^C*EF/GH-/+ malah jadi ABCEFGH-//+*^
*/