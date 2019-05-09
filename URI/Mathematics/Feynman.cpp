#include <iostream>

using namespace std;

int main() {
	int N;
	while(cin >> N && N != 0) {
		int Result = 0;
		N++;
		while(N--) {
			Result += N*N;
		}
		cout << Result << endl;
	}
	return 0;
}