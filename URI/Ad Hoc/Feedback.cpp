#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int N, K, Temp;
	cin >> N;
	while(N--) {
		cin >> K;
		while(K--) {
			cin >> Temp;
			if(Temp == 1) {
				cout << "Rolien" << endl;
			} else if(Temp == 2) {
				cout << "Naej" << endl;
			} else if(Temp == 3) {
				cout << "Elehcim" << endl;
			} else if(Temp == 4) {
				cout << "Odranoel" << endl;
			}
		}
	}
	return 0;
}