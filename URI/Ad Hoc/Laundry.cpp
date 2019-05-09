#include <iostream>

using namespace std;

int main() {
	int N, LA, LB, SA, SB;
	cin >> N;
	cin >> LA >> LB;
	cin >> SA >> SB;
	if((N >= max(LA, SA)) && (N <= min(LB, SB))) {
		cout << "possivel" << endl;
	} else {
		cout << "impossivel" << endl;
	}
	return 0;
}