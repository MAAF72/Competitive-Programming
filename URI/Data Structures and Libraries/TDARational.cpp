#include <iostream>
#define endl "\n"
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	int N;
	cin >> N;
	while(N--) {
		int N1, D1, N2, D2, N3, D3;
		char Ignore;
		char Operator;
		cin >> N1 >> Ignore >>  D1 >> Operator >> N2 >>  Ignore >> D2;
		
		switch(Operator) {
			case '+' :
				N3 = (N1 * D2) + (N2 * D1);
				D3 = (D1 * D2);
				break;
			case '-' :
				N3 = (N1 * D2) - (N2 * D1);
				D3 = (D1 * D2);
				break;
			case '*' :
				N3 = (N1 * N2);
				D3 = (D1 * D2);
				break;
			case '/' :
				N3 = (N1 * D2);
				D3 = (N2 * D1);
				break;
		}

		cout << N3 << "/" << D3 << " = " << (N3/abs(__gcd(N3, D3))) << "/" << (D3/abs(__gcd(N3, D3))) << endl;
	}
	return 0;
}