#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long Result[32];
	Result[0] = 0;
	Result[1] = 1;
	Result[2] = 3;
	for(int i = 3; i < 32; i++) {
		Result[i] = (2 * Result[i-1]) + 1;
	}
	int T, Temp;
	cin >> T;
	while(T--) {
		cin >> Temp;
		cout << Result[Temp] << endl;
	}
	return 0;
}
