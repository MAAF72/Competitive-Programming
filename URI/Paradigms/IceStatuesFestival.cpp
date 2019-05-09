#include <iostream>
#include <algorithm>

using namespace std;

int T, M, N, A[25], Memo[1000001];
bool Computed[1000001];

int minBlocks(int X) {
	if(X == 0) {
		return 0;
	}
	if(Computed[X]) {
		return Memo[X];
	}
	
	int Best = 2147483647;
	for(int i = 0; i < N; i++) {
		if(A[i] <= X) {
			int subBest = minBlocks(X - A[i]);
			if((subBest != 2147483647) && (subBest + 1 < Best)) {
				Best = subBest + 1;
			}
			
			//cout << "Best for "<< X << " is " << Best << endl;
		}
	}
	
	Computed[X] = true;
	Memo[X] = Best;
	
	return Best;
}



int main() {
	cin >> T;
	for(int i = 0; i < T; i++) {
		
		cin >> N >> M;
		
		int Aj;
		for(int j = 0; j < N; j++) {
			cin >> Aj;
			A[j] = Aj;
		}
		
		cout << minBlocks(M) << endl;
		
		fill(Computed, Computed+M+1, false); //reset array Computed untuk iterasi selanjutnya
	}
	return 0;
}