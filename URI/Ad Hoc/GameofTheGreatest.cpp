#include <iostream>

using namespace std;

int main() {
	int N;
	while(cin >> N && N != 0) {
		int A, B;
		int SB = 0;
		int SA = 0;
		while(N--) {
			cin >> A >> B;
			if(A != B) {
				if(A > B) {
					SA++;
				} else {
					SB++;
				}
			}
		}
		cout << SA << " " << SB << endl;
	}
	return 0;
}