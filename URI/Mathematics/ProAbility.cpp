//https://math.stackexchange.com/questions/1941639/probability-no-consecutive-tails
//https://math.stackexchange.com/questions/1355511/probability-that-no-two-consecutive-heads-occur ((BEST))

#include <iostream>
#include <algorithm>

using namespace std;

typedef unsigned long long ull;

ull NCT[41] = {0, 2, 3}; //NCT = No Consecutive Tails
ull BaseTwo[41] = {1, 2, 4};
//For length 1, H | T
//For length 2, HT | TH | HH
//For length n, n > 2, all elements from length (n-1) + 'H', plus all elements from length (n-2) + 'HT'

int N, X;

int main() {
	for(int i = 3; i < 41; i++) {
		BaseTwo[i] = BaseTwo[i-1] << 1;
		NCT[i] = NCT[i-1] + NCT[i-2];
	}
	
	while(cin >> X) {
		ull GCD = __gcd(NCT[X], BaseTwo[X]);
		cout << NCT[X]/GCD << "/" << BaseTwo[X]/GCD << endl;
	}
	return 0;
}