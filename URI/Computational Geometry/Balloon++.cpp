#include <iostream>

using namespace std;

const double Phi = 3.1415;

double Volume(unsigned long long R) {
	long long R3 = R * R * R;
	
	return ((4 * (Phi * R3)) / 3);
}

int main() {
	long long R, L;
	cin >> R >> L;
	cout << (int)(L / Volume(R)) << endl;
	return 0;
}