#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main() {
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
		
		for(auto s = V.begin(); s != V.end(); ++s) {
			cout << (*s)[0];
		}
		cout << endl;
	}
	
	return 0;
}