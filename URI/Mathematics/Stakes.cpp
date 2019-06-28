#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	long long A, B;
	while(cin >> A >> B) {
		long long FPB = __gcd(A, B);
		cout << (int)(A / FPB) * 2 + (int)(B / FPB) * 2 << endl;
	}
	return 0;
}