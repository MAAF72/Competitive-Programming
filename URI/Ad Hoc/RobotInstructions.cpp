#include <iostream>
#include <string>

using namespace std;

int main() {
	int T, N, Cmd2;
	string Cmd;
	cin >> T;
	while(T--) {
		cin >> N;
		int Instruction[N];
		for(int i = 0; i < N; i++) {
			cin >> Cmd;
			if(Cmd == "LEFT") {
				Instruction[i] = -1;
				//cout << "BELOK KIRI" << endl;
			} else if(Cmd == "RIGHT") {
				Instruction[i] = 1;
				//cout << "BELOK KANAN" << endl;
			} else {
				cin >> Cmd >> Cmd2;
				Instruction[i] = Instruction[Cmd2-1];
				//cout << "SAMA KAYAK CMD KE-" << Cmd2 << endl;
			}
		}
		int P = 0;
		for(int X : Instruction) {
			P += X;
		}
		cout << P << endl;
	}
	return 0;
}