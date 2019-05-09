#include <iostream>
#include <algorithm>

using namespace std;

typedef unsigned long long ull;

ull Factorial(int N, int K) {
	if (N  <= 1) {
		return 1;
	} else {
		return N * Factorial(N-K, K);
	}
}

int main() {
	int T;
	cin >> T;
	while(T--) {
		string Exclamation;
		int Base;
		cin >> Base >> Exclamation;
		//cout << Exclamation.length() << endl;
		cout << Factorial(Base, (int)Exclamation.length()) << endl;;
	}
	
	
	return 0;
}