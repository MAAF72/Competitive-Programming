#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int T, N;
	cin >> T;
	for(int j = 0; j < T; j++) {
		cin >> N;
		int Member[N];
		for(int i = 0; i < N; i++) {
			cin >> Member[i];
		}
		cout << "Case " << j+1 << ": " << Member[N/2] << endl;
	}
	return 0;
}