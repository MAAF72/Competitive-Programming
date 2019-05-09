#include <iostream>
#include <string>
#define endl "\n"

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	string S;
	while(getline(cin, S)) {
		bool Caps = true;
		for(int i = 0; i < (int)S.length(); i++) {
			if(S[i] != ' ') {
				if(Caps) {
					S[i] &= '_'; //bitwise, make character to upcase
				} else {
					S[i] |= ' '; //bitwise, make character to lowcase
				}
				Caps = !Caps;
			}
		}
		cout << S << endl;
	}
	return 0;
}