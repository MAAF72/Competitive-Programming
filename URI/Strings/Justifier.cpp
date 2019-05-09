#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	int N;
	string S;
	bool First = true;
	while(cin >> N && N) {
		if(First) {
			First = false;
		} else {
			cout << endl;
		}
		vector<string> V;
		int MaxLength = 0;
		while(N--) {
			cin >> S;
			MaxLength = max(MaxLength, (int)S.length());
			V.emplace_back(S);
		}
		for(auto VS : V) {
			for(int i = 0; i < (MaxLength - (int)VS.length()); i++) {
				cout << " ";
			}
			cout << VS << endl;
		}
	}
	return 0;
}