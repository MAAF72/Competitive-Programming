#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	int N, Temp;
	int Frequence[2001];
	fill(Frequence, Frequence+2001, 0);
	cin >> N;
	for(int i = 0; i < N; i++) {
		cin >> Temp;
		Frequence[Temp] = Frequence[Temp] + 1;
	}
	for(int i = 1; i < 2001; i++) {
		if(Frequence[i] > 0) {
			cout << i << " aparece " << Frequence[i] << " vez(es)" << endl;
		}
	}
	return 0;
}