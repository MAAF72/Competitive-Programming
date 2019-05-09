#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

#define Gravity 9.80665
#define Phi 3.14159
//Y = V sin Alpha T - 0.5 Gravity T^2
//0.5 Gravity T^2 - V sin Alpha T + Y
//A = 0.5 Gravity
//B = - V sin Alpha
//C = Y
int main() {
	double H, Alpha, V;
	int N, P1, P2;
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	while(cin >> H) {
		cin >> P1 >> P2;
		cin >> N;
		while(N--) {
			cin >> Alpha >> V;
			Alpha = Alpha * Phi / 180; //Converting Angle to radian, because parameter in cos and sin is for radian
			double A = 0.5 * Gravity;
			double B = -(V * sin(Alpha));
			double C = -H;
			double D = ((B*B) - (4*A*C));
			double T = max(((-B + sqrt(D)) / (2 * A)), ((-B - sqrt(D)) / (2 * A)));
			//cout << "T : " << T << endl;
			//cout << "Cos : " << cos(Alpha) << endl;
			double X = V * cos(Alpha) * T;
			cout << fixed << setprecision(5) << X << " -> " << (((X >= min(P1, P2)) && (X <= max(P1, P2))) ? "DUCK" : "NUCK") << endl;
		}
	}
	return 0;
}