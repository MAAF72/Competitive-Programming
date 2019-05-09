#include <iostream>

using namespace std;

int main() {
	int N;
	int R;
	cin >> N;
	while(N != 0) {
		int John = 0;
		int Mary = 0;
		for(int i = 0; i < N; i++) {
			cin >> R;
			if(R == 1) {
				John++;
			} else {
				Mary++;
			}
		}
		cout << "Mary won " << Mary << " times and John won " << John << " times" << endl;
		cin >> N;
	}
	return 0;
}