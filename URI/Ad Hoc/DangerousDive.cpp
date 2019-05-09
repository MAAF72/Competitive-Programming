#include <iostream>

using namespace std;

int main() {
	int N, R, Temp;
	while(cin >> N >> R) {
		bool Save[N+1];
		fill(Save, Save+N+1, false);
		bool Asterisk = true;
		for(int i = 0; i < R; i++) {
			cin >> Temp;
			Save[Temp] = true;
		}
		for(int i = 1; i <= N; i++) {
			if(!Save[i]) {
				Asterisk = false;
				cout << i << " ";
			}
		}
		if(Asterisk) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}