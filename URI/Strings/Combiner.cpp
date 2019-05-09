#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	int N;
	
	cin >> N;
	
	for(int i = 0; i < N; i++) {
		string S1, S2, S3;
		cin >> S1 >> S2;
		int j = 0;
		while(j < (int)S1.length() && (j < (int)S2.length())) {
			S3.push_back(S1[j]);
			S3.push_back(S2[j]);
			j++;
		}
		
		if(S1.length() > S2.length()) {
			S3.append(S1, j, ((int)S1.length() - j));
		} else if(S1.length() < S2.length()) {
			S3.append(S2, j, ((int)S2.length() - j));
		}
		cout << S3 << endl;
	}
	return 0;
}