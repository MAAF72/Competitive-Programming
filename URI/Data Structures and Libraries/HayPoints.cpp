#include <iostream>
#include <string>
#include <sstream>
#include <map>


using namespace std;

int main() {
	int M, N, Value;
	string Dict;
	map <string, int> Dictionary;
	cin >> M >> N;
	while(M--) {
		cin >> Dict >> Value;
		Dictionary[Dict] = Value;
	}
	
	string Line, Word;
	while(N--) {
		long long Sum = 0;
		while(getline(cin, Line) && Line != ".") {
			stringstream SS;
			SS.str(Line);
			while(SS >> Word) {
				if(Dictionary.count(Word)) {
					Sum += Dictionary[Word];
				}
			}
		}
		cout << Sum << endl;
	}
	
	return 0;
}