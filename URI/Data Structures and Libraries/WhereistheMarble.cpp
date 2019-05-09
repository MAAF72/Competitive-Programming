#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int Case, N, Q, Temp;
	Case = 0;
	while((cin >> N >> Q) && (N != 0 || Q != 0)) {
		Case++;
		vector<int> Marble;
		for(int i = 0; i < N; i++) {
			cin >> Temp;
			Marble.push_back(Temp);
		}
		sort(Marble.begin(), Marble.end());
		cout << "CASE# " << Case << ":" << endl;
		for(int i = 0; i < Q; i++) {
			cin >> Temp;
			auto Position = find(Marble.begin(), Marble.end(), Temp);
			cout << Temp;
			if(Position != Marble.end()) {
				cout << " found at " << Position - Marble.begin() + 1 << endl;
			} else {
				cout << " not found" << endl;
			}
		}
	}
	return 0;
}