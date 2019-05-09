#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int D, VF, VG;
	while(cin >> D >> VF >> VG) {
		double S = sqrt(144 + (D * D));
		if((12 * VG) >= (S * VF)) {
			cout << "S" << endl;
		} else {
			cout << "N" << endl;
		}
	}
	return 0;
}