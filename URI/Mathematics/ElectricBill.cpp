#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	long int A, B;
	while(cin >> A >> B && (A != 0 && B != 0)) {
		int Total = 0;
		if((A / 2) > 100) {
			Total += 100;
			A -= 200;
		} else {
			Total += A / 2;
			A = 0;
		}
		
		if((A / 2) > 100) {
			Total += 100;
			A -= 200;
		} else {
			Total += A / 2;
			A = 0;
		}
		
		if((A / 2) > 100) {
			Total += 100;
			A -= 200;
		} else {
			Total += A / 2;
			A = 0;
		}
	}
	return 0;
}