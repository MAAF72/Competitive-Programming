#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

const int x = 32; 

int main() {
	string Line, Word;
	while(getline(cin, Line)) {
		if(Line == "*") {
			break;
		}
		
		vector <string> V;
		
		stringstream SS;
		SS.str(Line);
		while(SS >> Word) {
			V.push_back(Word);
		}
		
		bool Valid = true;
		for(auto S : V) {
			if((S[0] & ~x) != (V.front()[0] & ~x)) {
				//cout << (S[0] & ~x) << endl;
				//cout << (V.front()[0] & ~x) << endl;
				cout << "N" << endl;
				Valid = false;
				break;
			}
		}
		if(Valid) {
			cout << "Y" << endl;
		}
	}
	return 0;
}