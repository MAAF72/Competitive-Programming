#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	int Day;
	
	while(cin >> Day) {
		int Cost;
		cin >> Cost;
		int Revenue[50];
		int Profit[50];
		int Profit2[50];
		int P = 0;
		int Temp = 0;
		for(int i = 0; i < Day; i++) {
			cin >> Revenue[i];
			if(Revenue[i] > Cost) {
				if(Temp != 0) {
					if(!(Temp < 0 && P == 0)) {
						Profit[P++] = Temp;
					}
				}
				Profit[P] = Revenue[i] - Cost;
				P++;
				Temp = 0;
			} else {
				Temp += Revenue[i] - Cost;
			}
		}
		/*
			for(int i = 0; i < (P-1); i++) {
				cout << Profit[i] << endl;
			}
		*/
		if(P > 0) {
			int Temp2 = 0;
			int Q = 0;
			for(int i = 0; i < P; i++) {
				if(Profit[i] < 0) {
					if(Temp2 != 0) {
						if(!(Temp2 < 0 && Q == 0)) {
							Profit2[Q++] = Temp2;
						}
					}
					Profit2[Q] = Profit[i];
					Q++;
					Temp2 = 0;
				} else {
					Temp2 += Profit[i];
				}
			}
			if(Temp2 != 0) {
				Profit2[Q++] = Temp2;
			}
			/*
				for(int i = 0; i < Q; i++) {
					cout << Profit2[i] << endl;
				}
			*/
			if(Q == 1) {
				cout << Profit2[0] << endl;
			} else {
				int Best = 0;
				for(int i = 0; i < Q; (i = i + 2)) {
					int Total = Profit2[i];
					Best = max(Best, Total);
					//cout << "BEST 1 : " << Best << endl;
					for(int j = i+1; j < Q; j++) {
						Total += Profit2[j];
						Best = max(Best, Total);
						//cout << "BEST j : " << Best << endl;
					}
					//cout << "BEST 2 : " << Best << endl;
				}
				//cout << "The BEST : ";
				
				cout << Best << endl;
			}
		} else {
			cout << "0" << endl;
		}
		
		
	}
	
	return 0;
}


/* 	Day : 3
	Daily Cost : 10
	12 13 100
	Result : 95
	
	Day : 5
	Daily Cost : 1
	2 3 4 5 6
	Result : 15 
	
	Day : 25
	Daily Cost :90
	87 28 3 783 7 43 4 8 78 25 37 600 457 0 14 578 157 378 124 1 34 78 95 45 45
	
25
90
87 28 3 783 7 43 4 8 78 25 37 600 457 0 14 578 157 378 124 1 34 78 95 45 45
*/