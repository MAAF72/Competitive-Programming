#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	int N, M;
	cin >> N;
	while(N--) {
		cin >> M;
		int P[1000], SortP[1000];
		for(int i = 0; i < M; i++) {
			cin >> P[i];
			SortP[i] = P[i];
		}
		sort(SortP, SortP+M, greater<int>());
		
		int Count = 0;
		for(int i = 0; i < M; i++) {
			if(P[i] != SortP[i]) {
				Count++;
			}
		}
		
		cout << M - Count << endl;
	}
	
	return 0;
}