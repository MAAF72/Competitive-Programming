#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int N;
	int Count = 0;
	while(cin >> N && N != -1) {
		Count++;
		cout << "Experiment " << Count << ": " <<  N / 2 << " full cycle(s)" << endl;
	}
	return 0;
}