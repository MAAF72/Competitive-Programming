#include <iostream>
#include <iomanip> //for setprecision
#include <cmath>

using namespace std;

int main() {
	int N, H, C, L;
	double Side;
	while(cin >> N) {
		cin >> H >> C >> L;
		Side = sqrt((H*H) + (C*C));
		cout << fixed << setprecision(4) << (L * N * Side) / 10000 << endl;
	}
	return 0;
}