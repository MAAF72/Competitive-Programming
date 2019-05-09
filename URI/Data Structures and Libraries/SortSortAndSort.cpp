#include <iostream>
#include <algorithm>

using namespace std;

int N, M;

bool compare(int A, int B) {
	int ModA = A % M;
	int ModB = B % M;
	if(ModA == ModB) {
		if(!(A & 1) != !(B & 1)) { //XOR, salah satu ganjil, otomatis salah satunya genap
			if(A & 1) {
				return true;
			} else {
				return false;
			}
		} else if((A & 1) == (B & 1)) {
			if(A & 1) {
				return A > B;
			} else {
				return A < B;
			}
		}
	}
	return ModA < ModB;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	
	while(cin >> N >> M) {
		cout << N << " " << M << endl;
		if(!(M || N)) {
			break;
		}
		
		int Arr[N];
		for(int i = 0; i < N; i++) {
			cin >> Arr[i];
		}
		
		sort(Arr, Arr+N, compare);
		for(int i = 0; i < N; i++) {
			cout << Arr[i] << endl;
		}
	}
	
	return 0;
}