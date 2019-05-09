#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int R, H, V, G;
	while(cin >> R >> H >> V >> G) {
		double Distance = (V * sqrt((2*H)/G));
		if(Distance > (double)R) {
			cout << "Y" << endl;
		} else {
			cout << "N" << endl;
		}
	}
	return 0;
}