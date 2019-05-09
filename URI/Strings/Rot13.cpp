#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	string S;
	while(getline(cin , S)) {
		for(int i = 0; i < (int)S.length(); i++) {
			if(S[i] >= 'A' && S[i] <= 'Z') {
				if(((int)S[i] + 13) > 90) {
					S[i] = 'A' + ((int)S[i] + 13 - 'Z') - 1;
				} else {
					S[i] += 13; //Shift by left
				}
			} else if(S[i] >= 'a' && S[i] <= 'z') {
				if(((int)S[i] + 13) > 122) {
					S[i] = 'a' + ((int)S[i] + 13 - 'z') - 1;
				} else {
					S[i] += 13; //Shift by left
				}
			}
		}
		cout << S << endl;
	}
	return 0;
}