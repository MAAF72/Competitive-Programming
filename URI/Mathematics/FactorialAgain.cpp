#include <iostream>

using namespace std;

int main() {
	int Factorial[6] = {1, 1, 2, 6, 24, 120};
	int N;
	while(cin >> N && N) {
		int Result = 0;
		int i = 1;
		while(N > 0) {
			Result += (N % 10) * Factorial[i];
			N /= 10;
			i++;
		}
		cout << Result << endl;
	}
	return 0;
}