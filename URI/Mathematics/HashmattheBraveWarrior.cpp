#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	long long M, N;
	while(cin >> M >> N) {
		cout << abs(M - N) << endl;
	}
	return 0;
}