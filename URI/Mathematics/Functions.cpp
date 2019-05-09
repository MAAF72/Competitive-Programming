#include <iostream>

using namespace std;

typedef long long ll;

ll Rafael(int X, int Y) {
	return ((9*X*X) + (Y*Y));
}

ll Beto(int X, int Y) {
	return ((2*X*X) + (25*Y*Y));
}

ll Carlos(int X, int Y) {
	return ((-100*X) + (Y*Y*Y));
}

int main() {
	int N, X, Y;
	cin >> N;
	while(N--) {
		cin >> X >> Y;
		ll Won = max(max(Rafael(X, Y), Beto(X, Y)), Carlos(X, Y));
		if(Won == Rafael(X, Y)) {
			cout << "Rafael";
		} else if(Won == Beto(X, Y)) {
			cout << "Beto";
		} else {
			cout << "Carlos";
		}
		cout << " ganhou" << endl;
	}
	return 0;
}