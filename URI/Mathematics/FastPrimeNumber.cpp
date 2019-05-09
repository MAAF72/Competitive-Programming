#include <iostream>

typedef long long ll;
using namespace std;

bool Prime(ll X) {
	if(X <= 3) {
		return (X > 1);
	} else if(((X & 1) == 0) || ((X % 3) == 0)) {
		return false;
	} else {
		ll i = 5;
		bool Valid = true;
		while(((i * i) <= X) && Valid) {
			if(((X % i) == 0) || ((X % (i + 2)) == 0)) {
				Valid = false;
			} else {
				i += 6;
			}
		}
		return Valid;
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	
	int N;
	ll X;
	
	cin >> N;
	
	for(int i = 0; i < N; i++) {
		cin >> X;
		cout << (Prime(X) ? "Prime"	: "Not Prime") << endl;
	}
	return 0;
}