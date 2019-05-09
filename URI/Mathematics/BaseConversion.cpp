#include <iostream>
#include <string>
using namespace std;

string DecToBin(int Dec) {
	// array to store binary number 
    int Digit[1000]; 
  
    // counter for binary array 
    int i = 0; 
    while (Dec > 0) {
        // storing remainder in binary array 
        Digit[i] = Dec % 2; 
        Dec = Dec / 2; 
        i++; 
    } 
  
    // printing binary array in reverse order 
	string Bin = "";
    for (int j = i - 1; j >= 0; j--) {
		Bin = Bin + to_string(Digit[j]);
	}
	return Bin;
}

void BinToDecHex(string Bin) {
	int Dec = stoll(Bin, nullptr, 2);
	cout << Dec << " dec" << endl;
	cout << hex << Dec << " hex" << endl;
}

void HexToDecBin(string Hex) {
	int Dec = stoll(Hex, nullptr, 16);
	cout << Dec << " dec" << endl;
	cout << DecToBin(Dec) << " bin" << endl;
	
}

void DecToHexBin(string Dec) {
	cout << hex << stoll(Dec) << " hex" << endl;
	cout << DecToBin(stoll(Dec)) << " bin" << endl;
}

int main() {
	int N;
	cin >> N;
	for(int i = 0; i < N; i++) {
		string X, Y;
		cin >> X >> Y;
		
		cout << "Case " << dec <<  i + 1 << ":" << endl;
		if(Y == "dec") {
			DecToHexBin(X);
		} else if(Y == "hex") {
			HexToDecBin(X);
		} else {
			BinToDecHex(X);
		}
		cout << endl;
	}
	return 0;
}