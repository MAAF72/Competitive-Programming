#include <iostream>
#include <cmath>

using namespace std;

int L, C, R1, R2;

bool Horizontal() {
	return ((R1+R1+R2+R2) <= L) && ((max(R1, R2) * 2) <= C);
}

bool Vertical() {
	return ((R1+R1+R2+R2) <= C) && ((max(R1, R2) * 2) <= L);
}

bool Diagonal() {
	int X1, Y1, X2, Y2;
	X1 = Y1 = R1; //Titik pusat lingkaran 1 berada di pojok kiri atas
	X2 = L - R2; 
	Y2 = C - R2;
	if((max(R1, R2) * 2) > min(L, C)) { //X1 == Y1
		return false;
	} else {
		//Titik pusat lingkaran 2 berada di pojok kanan bawah
		//Cek apakah posisi tersebut valid? apabila jarak antar titik lebih besar sama dengan R1+R2, maka valid
		return sqrt(((X2-X1) * (X2-X1)) + ((Y2-Y1) * (Y2-Y1))) >= R1+R2;
	}
}


int main() {
	
	cin >> L >> C >> R1 >> R2;
	while(L != 0 || C != 0 || R1 != 0 || R2 != 0) {
		if(Horizontal() || Vertical() || Diagonal()) {
			cout << "S" << endl;
		} else {
			cout << "N" << endl;
		}
		cin >> L >> C >> R1 >> R2;
	}
	return 0;
}