#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int N, M, Temp;
	while(cin >> N >> M && (M || N)) {
		int Ticket[(N+1)];
		fill(Ticket, Ticket+N+1, 0);
		while(M--) {
			cin >> Temp;
			Ticket[Temp]++;
		}
		int Result = 0;
		//cout << "N : " << N << endl;
		//cout << "Ticket Size = " << (sizeof(Ticket)/sizeof(*Ticket)) << endl;
		for(int i = 1; i <= N; i++) {
			//cout << i << " : " << Ticket[i] << endl;
			if(Ticket[i] > 1) {
				Result++;
			}
		}
		cout << Result << endl;
	}
	return 0;
}