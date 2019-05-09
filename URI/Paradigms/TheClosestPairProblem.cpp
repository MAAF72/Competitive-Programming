#include <iostream>
#include <algorithm>
#include <cmath>
#define endl "\n";

using namespace std;

struct Points {
	int X, Y;
};

bool compare(Points P1, Points P2) {
	return P1.X < P2.X;
}

void ClosestDistance(int X1, int Y1, int X2, int Y2) {
	unsigned long long SumOfExponent = ((X2-X1) * (X2-X1)) + ((Y2-Y1) * (Y2-Y1));
	if(SumOfExponent < 100000000) {
		cout << sqrt(SumOfExponent) << endl;
	} else {
		cout << "INFINITY" << endl;
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	int N;
	while(cin >> N && N != 0) {
		Points P[10000];
		for(int i = 0; i < N; i++) {
			cin >> P[i].X >> P[i].Y;
		}
		sort(P, P+N, compare);
		//for(int i = 0; i < N; i++) {
			//cout << P[i].X << "," << P[i].Y << endl;
		//}
		
		ClosestDistance(P[0].X, P[0].Y, P[1].X, P[1].Y);
	}
	return 0;
}