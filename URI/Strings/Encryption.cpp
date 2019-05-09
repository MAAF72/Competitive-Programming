#include <iostream>
#include <string>
#include <algorithm> //reverse

using namespace std;

int N;
string Letter;
int main () {
	cin >> N;
	cin.ignore(); //ignore 1 character, that is whitespace from input N
	for(int i = 0; i < N; i++) {
		getline(cin, Letter);
		for(int j = 0; j < (int)Letter.length(); j++) {
			if(((Letter[j] >= 'a') && (Letter[j] <= 'z')) || ((Letter[j] >= 'A') && (Letter[j] <= 'Z'))) {
				Letter[j] += 3; //shift to right by 3
			}
			
		}
		reverse(Letter.begin(), Letter.end());
		for(int k = ((int)Letter.length()/2); k < (int)Letter.length(); k++) {
			Letter[k] -= 1; //shift to left by 1
		}
		cout << Letter << endl; 	
	}
	return 0;
}