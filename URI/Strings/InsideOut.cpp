#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	int N;
	string S, Result;
	cin >> N;
	cin.ignore();
	while(N--) {
		getline(cin, S);
		Result = "";
		for(int i = (((int)S.length()/2) - 1); i >= 0; i--) {
			Result.push_back(S[i]);
		}
		for(int i = ((int)S.length() - 1); i > (((int)S.length()/2) - 1); i--) {
			Result.push_back(S[i]);
		}
		cout << Result << endl;
	}
	return 0;
}