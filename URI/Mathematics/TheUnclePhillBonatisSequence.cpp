#include <iostream>

using namespace std;

long long Arr[18] = {0, 0, 1, 1, 1, 2, 2, 4, 8, 12};

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	for(int i = 10; i < 18; i++) {
		if(i % 2) {
			Arr[i] = Arr[i-1] + Arr[i-2];
		} else {
			Arr[i] = Arr[i-1] * Arr[i-2];
		}
	}
	
	int N;
	while(cin >> N) {
		cout << Arr[N] << endl;
	}
	return 0;
}