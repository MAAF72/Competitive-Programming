#include <iostream>
#define endl "\n"

using namespace std;

int main() {
	int A, B, C;
	while(cin >> A >> B >> C) {
		if(A == B && B == C) {
			cout << "*" << endl;
		} else if(A == B && B != C) {
			cout << "C" << endl;
		} else if(A == C && C != B) {
			cout << "B" << endl;
		} else {
			cout << "A" << endl;
		}
	}
	return 0;
}