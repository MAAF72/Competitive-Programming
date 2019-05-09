#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	int N;
	string Text;
	
	cin >> N;
	cin.ignore();
	for(int i = 0; i < N; i++) {
		getline(cin, Text);
		stack <char> P;
		int D = 0;
		for(char C : Text) {
			if(C == '<') {
				P.push(C);
			} else if(C == '>') {
				if(P.size() > 0) {
					P.pop();
					D++;
				}
			}
		}
		cout << D << endl;
	}
	return 0;
}