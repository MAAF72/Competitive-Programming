#include <iostream>

using namespace std;

long long int Result[32001] = { 0, 2 };

long long int GetResult(int X) {
	if(Result[X]) {
		return Result[X];
	} else {
		Result[X] = X + GetResult(X-1);
		return Result[X];
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int T, N;
	cin >> T;
	while(T--) {
		cin >> N;
		cout << GetResult(N) << endl;
	}
	return 0;
}