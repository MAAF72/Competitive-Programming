#include <iostream>
#include <string>
#include <stack>

using namespace std;

#define endl '\n'

int main() {
	string s;
	while(cin >> s) {
		bool valid = 1;
		stack<char> p;
		for (char c : s) {
			if(!valid) {
				break;
			}
			if(c == '(') {
				p.push(c);
			} else if(c == ')') {
				if(p.size() > 0) {
					p.pop();
				} else {
					valid = 0;
				}
			}
		}
		valid = ((valid) && (p.size() == 0));
		cout << (valid ? "" : "in") << "correct" << endl;
	}
	return 0;
}