#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int N;
	cin >> N;
	cin.ignore();
	while(N--) {
		int Alphabet[26] = {0};
		string Line;
		getline(cin, Line);
		for(auto S : Line) {
			if(S >= 'A' && S <= 'Z') {
				Alphabet[(int)(S - 'A')]++;
			} else if(S >= 'a' && S <= 'z') {
				Alphabet[(int)(S - 'a')]++;
			}
		}
		
		int *Max = max_element(Alphabet, Alphabet + 26);
		for(int i = 0; i < 26; i++) {
			if(Alphabet[i] == *Max) {
				cout << (char)(i + 97);
			}
		}
		cout << endl;
	}
	return 0;
}