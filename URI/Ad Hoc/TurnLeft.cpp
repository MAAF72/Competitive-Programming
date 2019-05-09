#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int N;
	string S;
	while (cin >> N && N) {
		int D = 0, E = 0;
		cin >> S;
		for(auto C : S) {
			if(C == 'D') {
				D++;
			} else {
				E++;
			}
		}
		if(D == E) {
			cout << "N";
		} else {
			if(D > E) {
				switch((D-E) % 4) {
					case 0 :
					cout << "N";
					break;
					case 1 :
					cout << "L";
					break;
					case 2 :
					cout << "S";
					break;
					case 3 :
					cout << "O";
					break;
				}
			} else {
				switch((E-D) % 4) {
					case 0 :
					cout << "N";
					break;
					case 1 :
					cout << "O";
					break;
					case 2 :
					cout << "S";
					break;
					case 3 :
					cout << "L";
					break;
				}
			}
		}
		cout << endl;
	}
}