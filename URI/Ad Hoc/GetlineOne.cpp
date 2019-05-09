#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	string Name;
	int Sum = 0;
	int Temp;
	int Count = 0;
	while(getline(cin, Name)) {
		Count++;
		cin >> Temp;
		Sum += Temp;
		cin.ignore();
	}
	cout << fixed << setprecision(1) << (double)((double)Sum / (double)Count) << endl;
	return 0;
}