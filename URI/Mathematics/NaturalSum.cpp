#include <iostream>

using namespace std;

long long Sn(long long n) {
	return (n + (n*n))/2;
}

int main() {
	long long A, B;
	cin >> A >> B;
	cout << Sn(B) - Sn(A-1) << endl;
	return 0;
}