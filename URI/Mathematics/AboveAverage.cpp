#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int N, C, Temp;
	cin >> N;
	while(N--) {
		vector<int> V;
		cin >> C;
		int Sum = 0;
		for(int i = 0; i < C; i++) {
			cin >> Temp;
			Sum += Temp;
			V.push_back(Temp);
		}
		sort(V.begin(), V.end(), greater<int>());
		
		int Count = 0;
		//cout << "Average is " << (double)Sum/C << endl;
		for(auto i : V) {
			if((i*C) <= Sum) {
				break;
			} else {
				Count++;
			}
		}
		//cout << "Count is " << Count << endl;
		cout << fixed << setprecision(3) << (double)Count*100/C << "%" << endl;
	}
	return 0;
}