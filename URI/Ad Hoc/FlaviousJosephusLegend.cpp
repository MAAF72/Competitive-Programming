#include <iostream>

using namespace std;

int Josephus(int N, int K) { 
	if (N == 1) { 
		return 1;
	} else {
		return (Josephus(N - 1, K) + K-1) % N + 1; 
	}
}

int main() {
	int NC, N, K;
	cin >> NC;
	for(int i = 0; i < NC; i++) {
		cin >> N >> K;
		cout << "Case " << i + 1 << ": " << Josephus(N, K) << endl;
	}
	return 0;
}