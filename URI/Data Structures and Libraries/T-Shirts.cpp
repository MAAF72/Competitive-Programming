#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int N;
	string Name, Color, Size;
	bool First = true;
	while(cin >> N && N) {
		cin.ignore();
		vector<string> RedP;
		vector<string> RedM;
		vector<string> RedG;
		vector<string> WhiteP;
		vector<string> WhiteM;
		vector<string> WhiteG;
		while(N--) {
			getline(cin, Name);
			cin >> Color >> Size;
			cin.ignore();
			if(Size == "P") {
				if(Color == "branco") {
					WhiteP.push_back(Name);
				} else {
					RedP.push_back(Name);
				}
			} else if(Size == "M") {
				if(Color == "branco") {
					WhiteM.push_back(Name);
				} else {
					RedM.push_back(Name);
				}
			} else if(Size == "G") {
				if(Color == "branco") {
					WhiteG.push_back(Name);
				} else {
					RedG.push_back(Name);
				}
			}
		}
		sort(WhiteP.begin(), WhiteP.end());
		sort(WhiteM.begin(), WhiteM.end());
		sort(WhiteG.begin(), WhiteG.end());
		sort(RedP.begin(), RedP.end());
		sort(RedM.begin(), RedM.end());
		sort(RedG.begin(), RedG.end());
		if(!First) {
			cout << endl;
		} else {
			First = false;
		}
		for(auto S : WhiteP) {
			cout << "branco P " << S << endl;
		}
		for(auto S : WhiteM) {
			cout << "branco M " << S << endl;
		}
		for(auto S : WhiteG) {
			cout << "branco G " << S << endl;
		}
		for(auto S : RedP) {
			cout << "vermelho P " << S << endl;
		}
		for(auto S : RedM) {
			cout << "vermelho M " << S << endl;
		}
		for(auto S : RedG) {
			cout << "vermelho G " << S << endl;
		}
	}
	return 0;
}