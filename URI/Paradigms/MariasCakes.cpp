#include <iostream>
#include <algorithm> 
#define endl "\n"
using namespace std;

int main() {
	int T, D, I , B, Q, TempIndex, TempQuantity;
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> T;
	while(T--) {
		cin >> D >> I >> B;
		int Cost[I];
		for(int j = 0; j < I; j++) {
			cin >> Cost[j];
		}
		int Type[B] = {0};
		for(int i = 0; i < B; i++) {
			cin >> Q;
			while(Q--) {
				cin >> TempIndex >> TempQuantity;
				Type[i] += (Cost[TempIndex] * TempQuantity);
			}
		}
		
		cout << D / (*min_element(Type, Type+B)) << endl;
	}
	return 0;
}