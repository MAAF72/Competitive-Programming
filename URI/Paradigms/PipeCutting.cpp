#include <iostream>
#include <algorithm>

using namespace std;

typedef unsigned long long ull;

int T, N, PipeLength[1001], PipeValue[1001], Memo[2001];
bool Computed[2001];

ull maxValue(int Length) {
	if(Length == 0) {
		return 0;
	}
	if(Computed[Length]) {
		return Memo[Length];
	}
	
	ull Best = 0;
	for(int i = 0; i < N; i++) {
		if(PipeLength[i] <= Length) {
			ull subBest = maxValue(Length - PipeLength[i]) + PipeValue[i];
			if((subBest != 0) && (subBest > Best)) {
				Best = subBest;
			}
			
			//cout << "Best for "<< Length << " is " << Best << endl;
		}
	}
	
	Computed[Length] = true;
	Memo[Length] = Best;
	
	return Best;
}



int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> T;
	for(int i = 0; i < N; i++) {
		cin >> PipeLength[i] >> PipeValue[i];		
	}
	cout << maxValue(T) << endl;
	return 0;
}