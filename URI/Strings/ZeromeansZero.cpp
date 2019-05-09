#include <iostream>
#include <string>

using namespace std;

typedef unsigned long long ull;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	ull M, N;
	string Result;
	while(cin >> M >> N && (M || N)) {
		Result = to_string(M + N);
		for(auto C : Result) {
			if(C != '0') {
				cout << C;
			}
		}
		cout << endl;
	}
	return 0;
}