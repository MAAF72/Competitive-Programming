#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int C;
	double M, N;
	cin >> C;
	while(C--) {
		cin >> N >> M;
		cout << ceil(N / M) << endl;
	}
	return 0;
}