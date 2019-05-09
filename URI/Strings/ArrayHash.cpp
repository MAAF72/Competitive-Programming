#include <iostream>
#include <string>

using namespace std;

int main() {
	int N;
	cin >> N;
	while(N--) {
		int L;
		string S;
		long long Result = 0;
		cin >> L;
		for(int i = 0; i < L; i++) {
			cin >> S;
			for(int j = 0; j < (int)S.length(); j++) {
				Result += (int)(S[j] - 'A') + i + j;
			}
		}
		cout << Result << endl;
	}
	return 0;
}