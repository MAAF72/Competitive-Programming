#include <iostream>
#include <string>
#define endl "\n"

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	char D;
	string N, Result;
	while((cin >> D >> N) && (D != '0' || N != "0")) {
		Result = "";
		for(auto S : N) {
			if(S != D) {
				if(!(Result == "" && S == '0')) {
					Result.push_back(S);
				}
			}
		}
		Result = (Result == "" ? "0" : Result);
		cout << Result << endl;
	} 
	return 0;
}