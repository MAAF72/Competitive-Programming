#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int N;
	string Line, Word;
	
	cin >> N;
	cin.ignore();
	while(N--) {
		getline(cin, Line);
		vector <string> V;
		vector <int> Pos;
		stringstream SS;
		SS.str(Line);
		while(SS >> Word) {
			V.push_back(Word);
		}
		
		string search;
		cin >> search;
		cin.ignore();
		
		int Counter = 0;
		for(auto s = V.begin(); s != V.end(); ++s) {
			if(*s == search) {
				Pos.push_back(Counter);
			}
			Counter += (*s).length() + 1;
		}
		
		if(!Pos.empty()) {
			for(auto s = Pos.begin(); s != Pos.end() - 1; ++s) {
				cout << (*s) << " ";
			}
			cout << Pos.back() << endl;
		} else {
			cout << "-1" << endl;
		}
		
	}
	
	return 0;
}