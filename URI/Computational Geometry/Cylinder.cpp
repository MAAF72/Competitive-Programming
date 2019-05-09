#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>


using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int W, H;
	while((cin >> W >> H) && (W != 0 || H != 0)) {
		double r = sqrt((H * W) / (3 * M_PI));
		double t = ((W * H) / (2 * M_PI * r)) - (r / 2);
		cout << "Max Radius : " << r << endl;
		cout << "Base's Area : " << M_PI * r * r << endl;
		cout << "Base's Perimeter : " << 2 * M_PI * r << endl;
		cout << "Height : " << t << endl;
		cout << "Volume : " << M_PI * r * r * t << endl;
		cout << "Area of Cylinder : " << (2 * M_PI * r * t) + (M_PI * r * r) << endl;
	}
	return 0;
}


//10 10
//10 50
//10 30
	
//In the first case, the optimal cylinder has a radius of about 1.591549, in the second case, the optimal cylinder has a radius of 5, and in the third case, the optimal cylinder has a radius of about 3.621795.