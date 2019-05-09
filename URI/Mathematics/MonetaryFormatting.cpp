#include <iostream>
#include <string>

using namespace std;

typedef unsigned long long ull;
int main() {
	ull Dollars;
	int Cents;
	string DollarsString;
	while(cin >> Dollars) {
		cin >> Cents;
		DollarsString = to_string(Dollars);
		string Decimal = "";
		Decimal.push_back(DollarsString.back());
		
		for(int i = (int)DollarsString.length() - 2; i > -1; i--) {
			
			if(((int)DollarsString.length() - i - 1) % 3 == 0) {
				Decimal = "," + Decimal;
			}
			Decimal = DollarsString[i] + Decimal;
		}
		cout << "$";
		cout << Decimal;
		cout << ".";
		if(Cents < 10) {
			cout << "0";
		}
		cout << Cents << endl;
	}
	return 0;
}