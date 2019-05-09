#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(string S1, string S2) {
	return (S1.length() > S2.length());
}

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
		stringstream SS;
		SS.str(Line);
		while(SS >> Word) {
			V.push_back(Word);
		}
		
		//for(auto s = V.begin(); s != V.end(); ++s) {
			//cout << *s << endl;
		//}
		
		stable_sort(V.begin(), V.end(), compare);
		
		cout << V.front();
		for(auto s = V.begin()+1; s != V.end(); ++s) {
			cout << " " << *s;
		}
		cout << endl;
	}
	return 0;
}