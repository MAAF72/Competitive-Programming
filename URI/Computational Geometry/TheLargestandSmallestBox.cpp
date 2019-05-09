#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//Rumus Volume = (4*X*X*X) - (2*X*X*(W+L)) + (W*L*X)
//Turunan Pertama Volume = (12*X*X) - (4*X*(W+L)) + (W*L)
//Mencari akar-akar dengan rumus abc

void Solve(double L, double W, double &X) {
	double a = (((L+W) * (L+W)) - (3*W*L));
	X = ((W+L) - sqrt(a)) / 6;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	double L, W, X;
	cout << fixed << setprecision(3);
	while(cin >> L >> W) {
		Solve(L, W, X);
		cout << X << " 0.000 " << (min(L, W) * 0.5) << endl;
	}
}