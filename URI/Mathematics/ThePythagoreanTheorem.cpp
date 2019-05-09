#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int X, Y, Z, Hipotenusa, Cateto1, Cateto2;
	while(cin >> X >> Y >> Z) {
		Hipotenusa = max(X, max(Y, Z));
		Cateto1 = min(X, min(Y, Z));
		Cateto2 = (X + Y + Z) - Hipotenusa - Cateto1;
		if((Hipotenusa*Hipotenusa) == (Cateto1*Cateto1 + Cateto2*Cateto2)) {
			if(__gcd(Hipotenusa, __gcd(Cateto1, Cateto2)) == 1) {
				cout << "tripla pitagorica primitiva" << endl;
			} else {
				cout << "tripla pitagorica" << endl;
			}
		} else {
			cout << "tripla" << endl;
		}
	}
	return 0;
}