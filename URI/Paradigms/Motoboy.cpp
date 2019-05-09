#include <iostream>
#include <algorithm>
#define endl "\n"

using namespace std;

struct Pizza {
	int Time, Count;
};

bool compare(Pizza P1, Pizza P2) {
	return (P1.Count < P2.Count);
}

int P, N;
Pizza Order[20];

int Best;

int BruteForce(int Deep, int SumTime, int SumCount) {
	if(Deep < N) {
		if((SumCount+Order[Deep].Count) <= P) {
			int Choosed = BruteForce(Deep+1, SumTime + Order[Deep].Time, SumCount + Order[Deep].Count);
			int NotChoosed = BruteForce(Deep+1, SumTime, SumCount);
			//cout << "Deep : " << Deep << " Choosed : " << Choosed << " NotChoosed : " << NotChoosed << " SumCount : " << SumCount << endl;
			return max(Choosed, NotChoosed);
		} else {
			//cout << "Deep : " << Deep << " SumTime : " << SumTime << " SumCount : " << SumCount << endl;
			return SumTime;
		}
	} else {
		//cout << "Deep : " << Deep << " SumTime : " << SumTime << " SumCount : " << SumCount << endl;
		return SumTime;
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	while(cin >> N && N != 0) {
		cin >> P;
		for(int i = 0; i < N; i++) {
			cin >> Order[i].Time >> Order[i].Count;
		}
		
		sort(Order, Order+N, compare);
		Best = BruteForce(0, 0, 0);
		cout << Best << " min." << endl;
	}
	return 0;
}