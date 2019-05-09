#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	string S1, S2 = "", S3;
	cin >> S1;
	for(auto C : S1) {
		if(C == 'a' || C == 'e' || C == 'i' || C == 'o' || C == 'u') {
			S2.push_back(C);
		}
	}
	S3 = S2;
	reverse(S3.begin(), S3.end());
	cout << ((S2 == S3) ? "S" : "N") << endl;
	return 0;
}