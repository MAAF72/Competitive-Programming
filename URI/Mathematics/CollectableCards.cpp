#include <iostream>
#include <algorithm>

using namespace std;

int main () {
	int N;
	int F1, F2;
	
	cin >> N;
	for(int i = 0; i < N; i++) {
		cin >> F1 >> F2;
		cout << __gcd(F1, F2) << endl;
	}
	return 0;
}