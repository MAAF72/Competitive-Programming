#include <iostream>

using namespace std;

int main() {
	int N, D1, D2;
	cin >> N;
	while(N--) {
		cin >> D1 >> D2;
		cout << (D1 * D2) / 2 << " cm2" << endl;
	}
	return 0;
}