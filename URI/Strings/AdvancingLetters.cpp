#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int T;
	string A, B;
	cin >> T;
	while(T--) {
		int Result = 0;
		cin >> A >> B;
		for(int i = 0; A[i]; i++) {
			Result += ((int)B[i] - (int)A[i]);
			if(B[i] < A[i]) {
				Result += 26;
			}
		}
		cout << Result << endl;
	}
	return 0;
}