#include <iostream>
#include <algorithm>  

using namespace std;

#define LCM(A, B) ((A * B) / __gcd(A, B))

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int N, A, B;
	while(cin >> N >> A >> B && (N || A || B)) {
		cout << (N / A) + (N / B) - (N / LCM(A, B)) << endl;
	}
	return 0;
}