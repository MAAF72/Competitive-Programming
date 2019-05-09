#include <iostream>

using namespace std;

int main() {
	int N;
	float Food;
	cin >> N;
	for(int i = 0; i < N; i++) {
		cin >> Food;
		int Day = 0;
		while(Food > 1) {
			Day++;
			Food = Food/2;
		}
		cout << Day << " dias" << endl;
	}
	return 0;
}