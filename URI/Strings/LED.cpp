#include <iostream>
#include <string>

using namespace std;

int LED[10] = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
int N;
string Value;
int main() {
	cin >> N;
	for(int i = 0; i < N; i++) {
		cin >> Value;
		int Sum = 0;
		for(int j = 0; j < (int)Value.length(); j++) {
			Sum += LED[Value[j] - '0'];
		}
		cout << Sum << " leds" << endl;
	}
	return 0;
}