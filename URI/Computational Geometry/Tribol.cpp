#include <iostream>
#include <string>

using namespace std;

int C, P, R, G, B;
string M, S;

int main() {
	cin >> C;
	for(int i = 0; i < C; i++) {
		R = G = B = 0;
		cin >> P;
		for(int j = 0; j < P; j++) {
			cin >> M >> S;
			if(M == "B") {
				if(S == "G") {
					B++;
				} else if(S == "R") {
					B += 2;
				}
			} else if(M == "G") {
				if(S == "R") {
					G++;
				} else if(S == "B") {
					G += 2;
				}
			} else if(M == "R") {
				if(S == "B") {
					R++;
				} else if(S == "G") {
					R += 2;
				}
			}
		}
		//cout << " Score R : " << R << endl;
		//cout << " Score G : " << G << endl;
		//cout << " Score B : " << B << endl;
		if(R == G && G == B) {
			cout << "trempate" << endl;
		} else if((R > G) && (R > B)) {
			cout << "red" << endl;
		} else if((G > R) && (G > B)) {
			cout << "green" << endl;
		} else if((B > G) && (B > R)) {
			cout << "blue" << endl;
		} else {
			cout << "empate" << endl;
		}
	}
	return 0;
}
