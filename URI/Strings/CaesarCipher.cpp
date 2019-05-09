#include <iostream>
#include <string>

using namespace std;

/* 'A' is 65, 'Z' is 90 */

int main () {
	int N;
	int Shift;
	string Text;
	cin >> N;
	for(int i = 0; i < N; i++) {
		cin >> Text;
		cin >> Shift;
		if(Shift > 0) {
			for(int j = 0; j < (int)Text.length(); j++) {
				if(((int)Text[j] - Shift) < 65) {
					Text[j] = 'Z' - (Shift - ((int)Text[j] - 65)) + 1;
				} else {
					Text[j] -= Shift; //Shift by left
				}
			}
		}
		cout << Text << endl;
	}
	return 0;
}