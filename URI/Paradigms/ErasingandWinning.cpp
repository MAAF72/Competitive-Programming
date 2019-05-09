#include <iostream>
#include <string>
#define endl "\n"

using namespace std;

int Prev(string S, int Pos) {
	int Pos2 = Pos - 1;
	while(Pos2 > -1 && S[Pos2] == 'X') {
		Pos2--;
	}
	return Pos2;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int N, D, Pos, Pos2, LastPrev;
	string S;
	while((cin >> N >> D) && (N != 0 && D != 0)) {
		cin >> S;
		if((N-D) == 1) {
			int Highest = S[0] - '0';
			for(auto C : S) {
				if(Highest == 9) {
					break;
				}
				Highest = max(Highest, C - '0');
				
			}
			cout << Highest << endl;
		} else {
			Pos = 1;
			LastPrev = Pos;
			while((Pos < (int)S.length()) && (D > 0)) {
				Pos2 = Prev(S, LastPrev);
				if(Pos2 != -1) {
					if(S[Pos] > S[Pos2]) {
						S[Pos2] = 'X';
						D--;
						LastPrev = Pos2+1;
					} else {
						Pos++;
						LastPrev = Pos;
					}
				} else {
					Pos++;
					LastPrev = Pos;
				}
			}
			if(D > 0) {
				//String terurut dari besar ke terkecil, delete D string terakhir
				int i = (int)S.length() - 1;
				while(D--) {
					S[i] = 'X';
					i--;
				}
			}
			for(auto C : S) {
				if(C != 'X') {
					cout << C;
				}
			}
			cout << endl;
		}
	}
	return 0;
}