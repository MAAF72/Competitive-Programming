#include <iostream>

using namespace std;

int main() {
	int K, N, M, X, Y;
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	while(cin >> K && K != 0) {
		cin >> N >> M;
		while(K--) {
			cin >> X >> Y;
			if(X == N || X == M || Y == N || Y == M) {
				cout << "divisa" << endl;
			} else if(X < N) {
				if(Y < M) {
					cout << "SO" << endl;
				} else {
					cout << "NO" << endl;
				}
			} else if(X > N) {
				if(Y < M) {
					cout << "SE" << endl;
				} else {
					cout << "NE" << endl;
				}
			}
		}
	}
	return 0;
}