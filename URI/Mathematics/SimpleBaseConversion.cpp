#include <iostream>
#include <string>

using namespace std;

int main() {
	string S;
	while(cin >> S && S[0] != '-') {
		if(S[0] == '0' && S[1] == 'x') {
			cout << dec << stol(S, nullptr, 0) << endl;
		} else {
			cout << "0x" << uppercase << hex << stol(S) << endl;
		}
	}
	return 0;
}
//https://www.geeksforgeeks.org/program-decimal-hexadecimal-conversion/
//https://www.geeksforgeeks.org/stdoct-stddec-and-stdhex-in-cpp/