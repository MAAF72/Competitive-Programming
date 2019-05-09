//AKHIRNYA ACC AJG, sampe bikin 3 versi ajg
#include <iostream>
#include <string>
#define endl "\n"

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int N, D;
	string S;
	while((cin >> N >> D) && (N != 0 || D != 0)) {
		cin >> S;
		if((N-D) == 1) {
			//cout << "A" << endl;
			int Highest = S[0] - '0';
			for(auto C : S) {
				if(Highest == 9) {
					break;
				}
				Highest = max(Highest, (C - '0'));
				
			}
			cout << Highest << endl;
		} else {
			//cout << "Tolong la gan" << endl;
			string Max;
			//cout << "First Push" << endl;
			Max.push_back(S[0]);
			
			int i = 1;
			
			while(D > 0 && i < (int)S.length()) {
				//cout << "test gan" << endl;
				while(!Max.empty() && S[i] > Max.back()) {
					//cout << "Pop" << endl;
					Max.pop_back();
					D--;
					if(D == 0) {
						break;
					}
				}
				Max.push_back(S[i]);
				i++;
			}
			
			if(D > 0) {
				//String terurut dari besar ke terkecil, delete D string terakhir
				while(D--) {
					Max.pop_back();
				}
			}
			
			for(auto C : Max) {
				cout << C;
			}
			
			while(i < (int)S.length()) {
				cout << S[i];
				i++;
			}
			cout << endl;
		}
	}
	return 0;
}