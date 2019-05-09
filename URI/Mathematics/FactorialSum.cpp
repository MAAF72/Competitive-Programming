#include <iostream>
#include <algorithm>

using namespace std;

typedef unsigned long long ull;

ull Factorial[21] = { 1, 1, 2 };

ull GetFactorial(int X) {
	if(Factorial[X] > 0) {
		return Factorial[X];
	} else {
		Factorial[X] = X * GetFactorial(X-1);
		return Factorial[X];
	}
}

int A, B;
int main() {
	ios::sync_with_stdio(false);
	while(cin >> A >> B) {
		if(A > B) {
		cout << GetFactorial(A) + Factorial[B] << endl;
		} else {
			cout << GetFactorial(B) + Factorial[A] << endl;
		}
	}
	return 0;
}