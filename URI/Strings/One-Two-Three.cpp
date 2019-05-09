#include <iostream>
#include <string>

using namespace std;

bool One(string S) {
	int Valid = 0;
	if(S[0] == 'o') {
		Valid++;
	}
	if(S[1] == 'n') {
		Valid++;
	}
	if(S[2] == 'e') {
		Valid++;
	}
	return (Valid == 2 || Valid == 3);
}

string S;
int N;
int main() {
	ios_base::sync_with_stdio(0);
	cin >> N;
	
	for(int i = 0; i < N; i++) {
		cin >> S;
		if(S.length() == 5) {
			cout << 3 << endl;
		} else {
			if(One(S)) {
				cout << 1 << endl;
			} else {
				cout << 2 << endl;
			}
		}
	}
	return 0;
}