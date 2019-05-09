#include <iostream>
#include <cmath>
using namespace std;

int R1, X1, Y1, R2, X2, Y2;

int main() {
	ios_base::sync_with_stdio(false);
	
	while(cin >> R1 >> X1 >> Y1 >> R2 >> X2 >> Y2) {
		double D = sqrt(((X2-X1) * (X2-X1)) + ((Y2-Y1) * (Y2-Y1)));
		if(((D < abs(R2-R1)) || (D == abs(R2-R1))) && (R1 > R2)) {
			cout << "RICO" << endl;
		} else {
			cout << "MORTO" << endl;
		}
	}
	return 0;
}