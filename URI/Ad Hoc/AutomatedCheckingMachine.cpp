#include <iostream>

using namespace std;

int main() {
	int X[5], Y[5];
	cin >> X[0] >> X[1] >> X[2] >> X[3] >> X[4];
	for(int i = 0; i < 5; i++) {
		if(cin >> Y[i] && Y[i] == X[i]) {
			cout << "N" << endl;
			return 0;
		}
	}
	cout << "Y" << endl;
	return 0;
}