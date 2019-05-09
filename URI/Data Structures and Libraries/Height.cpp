#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int NC, N, Temp;
	cin >> NC;
	while(NC--) {
		cin >> N;
		long long H[231] = {0};
		while(N--) {
			cin >> Temp;
			H[Temp] += 1;
		}
		
		
		bool First = true;
		for(int i = 20; i < 231; i++) {
			if(H[i] != 0) {
				for(int j = 0; j < H[i]; j++) {
					if(!First) {
						cout << " ";
					} else {
						First = false;
					}
					cout << i;
				}
			}
		}
		cout << endl;
	}
	return 0;
}