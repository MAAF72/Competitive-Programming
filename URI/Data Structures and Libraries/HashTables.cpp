#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int N, Base, Count, Temp;
	cin >> N;
	while(N--) {
		cin >> Base >> Count;
		vector <vector<int>> Key(Base);
		
		while(Count--) {
			cin >> Temp;
			Key[Temp % Base].push_back(Temp);
			//cout << Temp << " MOD " << Base << " = " << Temp % Base << endl;
		}
		
		for(int i = 0; i < Base; i++) {
			cout << i;
			for(auto s : Key[i]) {
				cout << " -> " << s;
			}
			cout << " -> \\" << endl;
		}
		if(N != 0) {
			cout << endl;
		}
	}
	return 0;
}