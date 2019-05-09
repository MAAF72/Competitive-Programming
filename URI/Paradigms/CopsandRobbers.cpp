//X = Baris, Y = Kolom. Mulai dari 0,0 dipojok kiri atas
#include <iostream>

using namespace std;

int MoveX[] = {1, 0, -1, 0};
int MoveY[] = {0, 1, 0, -1};

bool Valid(int X, int Y) {
	return ((X >= 0 && X < 5) && (Y >= 0 && Y < 5));
}

void BruteForce(int (&Matrix)[5][5], bool (&Visited)[5][5], int X, int Y) {
	Visited[X][Y] = true;
	if(X == Y && Y == 4) {
		return;
	}
		
	for(int i = 0; i < 4; i++) {
		int NextX = (X+MoveX[i]);
		int NextY = (Y+MoveY[i]);
		if(Valid(NextX, NextY) && !Visited[NextX][NextY] && (Matrix[NextX][NextY] == 0)) {
			BruteForce(Matrix, Visited, NextX, NextY);
			if(Visited[4][4]) {
				return;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--) {
		int Matrix[5][5];
		for(int i = 0; i < 5; i++) {
			for(int j = 0; j < 5; j++) {
				cin >> Matrix[i][j];
			}
		}
		
		bool Visited[5][5] = { false };
		
		/*
		for(int i = 0; i < 5; i++) {
			for(int j = 0; j < 5; j++) {
				cout << Visited[i][j];
			}
		}
		*/
		if(Matrix[0][0] || Matrix[4][4]) {
			cout << "ROBBERS" << endl;
		} else {
			BruteForce(Matrix, Visited, 0, 0);
			if(Visited[4][4]) {
				cout << "COPS" << endl;
			} else {
				cout << "ROBBERS" << endl;
			}
		}
	}
	return 0;
}