#include <iostream>

using namespace std;

typedef unsigned long long ull;

int main() {
	int N;
	int X;
	ull Result[65];
	Result[0] = 0;
	Result[1] = 1;
	Result[2] = 3;
	for(int i = 3; i < 65; i++) {
		Result[i] = (2 * Result[i-1]) + 1;
	}
	
	cin >> N;
	
	for(int i = 0; i < N; i++) {
		cin >> X;
		cout << Result[X] / 12000 << " kg" << endl;
	}
	
	return 0;
}