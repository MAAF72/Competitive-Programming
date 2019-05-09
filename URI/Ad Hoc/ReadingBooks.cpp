#include <iostream>

using namespace std;

int main() {
	int Q, D, P;
	while(cin >> Q && Q) {
		cin >> D >> P;
		int Page = Q * (P * D) / (P - Q);
		if(Page == 1) {
			cout << Page << " pagina" << endl;
		} else {
			cout << Page << " paginas" << endl;
		}
	}
	return 0;
}