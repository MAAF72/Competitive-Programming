#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	while(N--) {
		int QT, S;
		int Closest = 0;
		cin >> QT >> S;
		int Arr[QT];
		for(int i = 0; i < QT; i++) {
			cin >> Arr[i];
			Closest = ((abs(Arr[Closest] - S) > abs(Arr[i] - S)) ? i : Closest);
		}
		cout << Closest + 1 << endl;
	}
	return 0;
}