#include <iostream>
#include <string>

using namespace std;

int main() {
	int N;
	string C;
	cin >> N;
	while(N--) {
		cin >> C;
		int A = (int)C[0] - '0';
		int B = (int)C[2] - '0';
		if(A != B) {
			if(C[1] >= 'A' && C[1] <= 'Z') {
			cout << (B - A) << endl;
			} else {
				cout << (B + A) << endl;
			}
		} else {
			cout << (A * B) << endl;
		}
	}
	return 0;
}