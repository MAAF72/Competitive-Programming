#include <iostream>
#include <string>
#include <sstream>
#include <set>
#include <cctype>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	string Line, Word;
	set<string> Dict;
	while(cin >> Line) {
		stringstream SS(Line);
		while(SS >> Word) {
			string FixWord;
			for(auto &i : Word) {
				if(!isalpha(i)) {
					if(FixWord.length() > 0) {
						Dict.insert(FixWord);
					}
					FixWord = "";
					
				} else {
					FixWord += tolower(i);
				}
			}
			if(FixWord.length() > 0) {
				Dict.insert(FixWord);
			}
		}
	}
	
	for(auto i : Dict) {
		cout << i << endl;
	}
	
	return 0;
}