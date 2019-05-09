#include <iostream>
#include <string>

using namespace std;

int main() {
	int N, TempSize;
	string TempFoot;
	while(cin >> N) {
		int E[31] = {0};
		int D[31] = {0};
		while(N--) {
			cin >> TempSize >> TempFoot;
			if(TempFoot == "E") {
				E[TempSize-30]++;
			} else {
				D[TempSize-30]++;
			}
		}
		int Pair = 0;
		for(int i = 0; i < 31; i++) {
			Pair += min(E[i], D[i]);
		}
		cout << Pair << endl;
	}
	return 0;
}