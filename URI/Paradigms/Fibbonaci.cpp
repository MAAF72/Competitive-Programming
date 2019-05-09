#include <iostream>

using namespace std;

typedef unsigned long long ull;

ull Fib[40] = {0, 1};
ull FibCalls[40] = {0, 0};

int N, X;

int main() {
	cin >> N;
	for(int i = 2; i < 40; i++) {
		FibCalls[i] = FibCalls[i-1] + FibCalls[i-2] + 2;
		Fib[i] = Fib[i-1] + Fib[i-2];
	}
	
	for(int i = 0; i < N; i++) {
		cin >> X;
		cout << "fib(" << X << ") = " << FibCalls[X] << " calls = " << Fib[X] << endl;
	}
	return 0;
}