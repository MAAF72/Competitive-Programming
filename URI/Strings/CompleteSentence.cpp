#include <iostream>
#include <string>

using namespace std;

void Execute(string S) {
	bool Alphabet[26] = {false};
	int Count = 0;
	for(auto C : S) {
		if(C >= 'a' && C <= 'z') {
			if(!Alphabet[C - 'a']) {
				Alphabet[C - 'a'] = true;
				Count++;
			}
		}
	}
	
	if(Count == 26) {
		cout << "frase completa" << endl;
	} else if(Count >= 13) {
		cout << "frase quase completa" << endl;
	} else {
		cout << "frase mal elaborada" << endl;
	}
}

int main() {
	int N;
	string S;
	cin >> N;
	cin.ignore();
	while(N--) {
		getline(cin, S);
		Execute(S);
	}
	return 0;
}