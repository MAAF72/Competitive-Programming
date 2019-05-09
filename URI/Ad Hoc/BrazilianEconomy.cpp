#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int N;
	int Ok = 0;
	int NotOk = 0;
	int Temp;
	cin >> N;
	while(N--) {
		if(cin >> Temp && Temp) {
			NotOk++;
		} else {
			Ok++;
		}
	}
	if(Ok > NotOk) {
		cout << "Y" << endl;
	} else {
		cout << "N" << endl;
	}
	return 0;
}