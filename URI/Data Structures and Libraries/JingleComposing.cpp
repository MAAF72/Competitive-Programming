#include <iostream>
#include <string>

using namespace std;

int main() {
	string S;
	while(cin >> S && S != "*") {
		int Count = 0;
		double Sum = 0;
		for(int i = 1; (i + 1) < (int)S.length(); i++) {
			if(S[i] == '/') {
				if(Sum == 1.000000) {
					Count++;
				}
				Sum = 0;
			} else {
				switch(S[i]) {
					case 'W' :
					Sum += 1;
					break;
					case 'H' :
					Sum += 0.5;
					break;
					case 'Q' :
					Sum += 0.25;
					break;
					case 'E' :
					Sum += 0.125;
					break;
					case 'S' :
					Sum += 0.0625;
					break;
					case 'T' :
					Sum += 0.03125;
					break;
					case 'X' :
					Sum += 0.015625;
					break;
				}
			}
		}
		if(Sum == 1.000000) {
			Count++;
		}
		cout << Count << endl;
	}
	return 0;
}