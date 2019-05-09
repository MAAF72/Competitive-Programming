#include <iostream>

using namespace std;

int X1, Y1, X2, Y2;

bool isEqual() {
	return ((X1 == X2) && (Y1 == Y2));
}

bool isInDiagonalRange() {
	return (abs(X1-X2) == abs(Y1-Y2));
}

bool isInVerticalRange() {
	return (X1 == X2);
}

bool isInHorizontalRange() {
	return (Y1 == Y2);
}

int main() {
	cin >> X1 >> Y1 >> X2 >> Y2;
	while(X1 != 0 || Y1 != 0 || X2 != 0 || Y2 != 0) {
		if(isEqual()) {
			cout << 0 << endl;
		} else if(isInDiagonalRange() || isInHorizontalRange() || isInVerticalRange()) {
			cout << 1 << endl;
		} else {
			cout << 2 << endl;
		}
		cin >> X1 >> Y1 >> X2 >> Y2;
	}
	return 0;
}