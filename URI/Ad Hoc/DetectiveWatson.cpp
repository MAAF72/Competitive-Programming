#include <iostream>
#include <algorithm>

using namespace std;

struct Person {
	int Position, SuspectValue;
};

bool compare(Person P1, Person P2) {
	return P1.SuspectValue > P2.SuspectValue;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie();
	int N;
	Person Suspect[1000];
	while(cin >> N && N != 0) {
		for(int i = 0; i < N; i++) {
			cin >> Suspect[i].SuspectValue;
			Suspect[i].Position = i+1;
			
		}
		sort(Suspect, Suspect + N, compare);
		cout << Suspect[1].Position << endl;
	}
	return 0;
}