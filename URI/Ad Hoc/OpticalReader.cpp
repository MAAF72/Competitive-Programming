#include <iostream>

using namespace std;

int main() {
	int N, A, B, C, D, E;
	
	while(cin >> N && N != 0) {
		while(N--) {
			char Answer = '*';
			cin >> A >> B >> C >> D >> E;
			if(A <= 127) {
				Answer = 'A';
			}
			if(B <= 127) {
				if(Answer == '*') {
					Answer = 'B';
				} else {
					cout << '*' << endl;
					continue;
				}
			}
			if(C <= 127) {
				if(Answer == '*') {
					Answer = 'C';
				} else {
					cout << '*' << endl;
					continue;
				}
			}
			if(D <= 127) {
				if(Answer == '*') {
					Answer = 'D';
				} else {
					cout << '*' << endl;
					continue;
				}
			}
			if(E <= 127) {
				if(Answer == '*') {
					Answer = 'E';
				} else {
					cout << '*' << endl;
					continue;
				}
			}
			cout << Answer << endl;
		}
	}
	return 0;
}