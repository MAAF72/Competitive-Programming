#include <iostream>
#include <string>
#define endl "\n"

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int N, D, Pos;
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
			while((Pos < (int)S.length()) && (D > 0)) {
				if(S[Pos] > S[Pos-1]) {
					S.erase(S.begin() + Pos - 1);
					Pos--;
					D--;
					if(Pos == 0) {
						Pos = 1;
					}
				} else {
					Pos++;
				}
			}
			if(D > 0) {
				//String terurut dari besar ke terkecil, delete D string terakhir
				while(D--) {
					S.pop_back();
				}
			}
			for(auto C : S) {
				cout << C;
			}
			cout << endl;
		}
	}
	return 0;
}