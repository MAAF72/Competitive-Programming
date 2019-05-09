#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string A, B;
	
	while((cin >> A >> B) && (A != "0" || B != "0")) {
		int Count = 0;
		if(B.length() > A.length()) {
			swap(A, B); //A selalu menjadi yang terpanjang
		}
		
		int Carry = 0;
		for(int i = 0; i < (int)B.length(); i++) {
			int DigitA = A[A.length() - i - 1] - '0';
			int DigitB = B[B.length() - i - 1] - '0';
			if((DigitA + DigitB + Carry) > 9) {
				Count++;
				Carry = 1;
			} else {
				Carry = 0;
			}
			//cout << "Digit A : " << DigitA << endl;
			//cout << "Digit B : " << DigitB << endl;
			
		}
		if(A.length() > B.length()) {
			if(Carry) {
				int i = 1;
				while(A[A.length() - B.length() - i] == '9') {
					Count++;
					i++;
				}
			}
		}
		if(Count == 0) {
			cout << "No";
		} else {
			cout << Count;
		}
		cout << " carry operation";
		if(Count > 1) {
			cout << "s";
		}
		cout << "." << endl;
		
	}
}