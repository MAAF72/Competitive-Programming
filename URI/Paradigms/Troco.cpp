#include <iostream>

using namespace std;

int V, M, C[1001];

bool BruteForce(int Deep, int Sum) {
	if(Deep > M) {
		if(Sum == V) {
			cout << "1" << endl;
			return true;
		} else {
			return false;
		}
	}
	if(Sum > V) {
		return false;
	}
	bool Option1 = BruteForce(Deep + 1, Sum + C[Deep]);
	bool Option2 = BruteForce(Deep + 1, Sum);
	return Option1 || Option2;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> V >> M;
	
	for(int i = 0; i < M; i++) {
		cin >> C[i];
	}
	
	if(BruteForce(0, 0)) {
		cout << "S" << endl;
	} else {
		cout << "N" << endl;
	}
	return 0;
}