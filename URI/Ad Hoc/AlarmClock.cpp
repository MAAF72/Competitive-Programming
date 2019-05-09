#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	int H1, M1, H2, M2;
	cin >> H1 >> M1 >> H2 >> M2;
	while(H1 != 0 || M1 != 0 || H2 != 0 || M2 != 0) {
		if((H1 > H2) || ((H1 == H2) && (M1 > M2))) {
			H2 += 24;
		}
		cout << ((H2 - H1) * 60) + (M2 - M1) << endl;
		cin >> H1 >> M1 >> H2 >> M2;
	}
	
	return 0;
}