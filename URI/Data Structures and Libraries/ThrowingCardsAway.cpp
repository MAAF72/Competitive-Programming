#include <iostream>
#include <queue>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	
	int N;
	cin >> N;
	while(N != 0) {
		queue <int> Deck, Discard;
		for(int i = 1; i < (N+1); i++) {
			Deck.push(i);
		}
		while(Deck.size() > 1) {
			Discard.push(Deck.front());
			Deck.pop();
			Deck.push(Deck.front());
			Deck.pop();
		}
		
		cout << "Discarded cards:";
		while(!Discard.empty()) {
			cout << " " << Discard.front() << (Discard.size() == 1 ? "" : ",");
			Discard.pop();
		}
		cout << endl;
		cout << "Remaining card: " << Deck.front() << endl;
		cin >> N;
	}
	return 0;
}