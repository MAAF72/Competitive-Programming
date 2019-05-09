#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	int N;
	string A, B;
	cin >> N;
	while(N--) {
		cin >> A >> B;
		if(((int)A.length() < (int)B.length()) || (A.rfind(B) != ((int)A.length() - (int)B.length()))) {
			cout << "nao ";
		}
		cout << "encaixa" << endl;
	}
	return 0;
}