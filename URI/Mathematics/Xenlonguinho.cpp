#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int C, N;
	cin >> C;
	while(C--) {
		cin >> N;
		int Discard = 0;
		for(int i = 1; i <= N; i++) {
			long long S = round(sqrt(i));
			if((S * S) == i) {
				//cout << i << " adalah bilangan kuadrat" << endl;
				Discard++;
			}
		}
		cout << N - Discard << endl;
	}
	return 0;
}