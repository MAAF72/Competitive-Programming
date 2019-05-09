#include <iostream>
#include <algorithm>
#include <iomanip>
#define endl "\n"

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T, S, C, R;
	cin >> T;
	while(T--) {
		cin >> S >> C >> R;
		double Speed[S];
		for(int i = 0; i < S; i++) {
			cin >> Speed[i];
		}
		
		sort(Speed, Speed + S);
		
		//for(int i = 0; i < S; i++) {
			//cout <<  Speed[i];
		//}
		
		double Result = 0.0;
		for(int i = 0; i < S; i++) {
			if(i < C) {
				Result = Result + (1 / (Speed[i]+R));
			} else {
				Result = Result + (1 / Speed[i]);
			}
		}
		cout << fixed << setprecision(2) << Result << endl;
	}
}