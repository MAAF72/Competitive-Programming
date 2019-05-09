  #include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, X;
vector<int> Even;
vector<int> Odd;

int main() {
	ios_base::sync_with_stdio(0);
	
	cin >> N;
	for(int i = 0; i < N; i++) {
		cin >> X;
		if(X & 1) {
			Odd.push_back(X);
		} else {
			Even.push_back(X);
		}
	}
	
	sort(Even.begin(), Even.end());
	sort(Odd.begin(), Odd.end(), greater<int>());
	for (auto X : Even) {
		cout << X << endl;
	}
	for (auto X : Odd) {
		cout << X << endl;
	}
	return 0;
}