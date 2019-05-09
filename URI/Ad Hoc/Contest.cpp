#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int N, M, Temp;
	while(cin >> N >> M && (M || N)) {
		int Prob[M];
		fill(Prob, Prob+M, 0);
		bool C1 = true;
		bool C4 = true;
		for(int i = 0; i < N; i++) {
			bool C4Temp = false;
			bool C1Temp = false;
			for(int j = 0; j < M; j++) {
				cin >> Temp;
				if(Temp == 1) {
					Prob[j]++;
					C4Temp = true;
				} else {
					C1Temp = true;
				}
			}
			C1 = C1 && C1Temp;
			C4 = C4 && C4Temp;
		}
		
		bool C2 = true;
		bool C3 = true;
		for(int j = 0; j < M; j++) {
			if(Prob[j] == 0) {
				C2 = false;
			}
			
			if(Prob[j] == N) {
				C3 = false;
			}
			//cout << "Solve " << j << " : " << Prob[j] << endl;
		}
		int Result = 0;
		if(C1) {
			//cout << "C1 is achieved" << endl;
			Result++;
		}
		if(C2) {
			//cout << "C2 is achieved" << endl;
			Result++;
		}
		if(C3) {
			//cout << "C3 is achieved" << endl;
			Result++;
		}
		if(C4) {
			//cout << "C4 is achieved" << endl;
			Result++;
		}
		cout << Result << endl;
		
	}
	return 0;
}