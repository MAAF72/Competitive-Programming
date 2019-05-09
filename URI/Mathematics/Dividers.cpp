#include <iostream>
#include <set>
#include <cmath>

using namespace std;

typedef long long ll;

ll A, B, C, D , N;

bool Valid(ll N) {
	return ((N % A == 0) && (N % B != 0) && (C % N == 0) && (D % N != 0));	
}


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	cin >> A >> B >> C >> D;
	set<int> NSet;
	for(ll i = 1; i <= sqrt(C); i++) {
		if(C % i == 0) {
			N = C / i; // C = i * (C / i) => C = i * N
			
			if(Valid(i)) {
				NSet.insert(i);
			}

			if(Valid(N)) {
				NSet.insert(N);
			}
		}		
	}
	cout << (NSet.empty() ? -1 : *NSet.begin()) << endl;
	return 0;
}

/*
N = A * X, N mod A = 0, X = [1, ~) , A <= N, A = [1, N], bisa jadi acuan mulai. ingat aturan pembagian
A adalah pembagi dari N
maka faktor2 dari A juga pembagi dari N
tetapi cari nilai mulai yang mendekati N tentunya


N mod B != 0, B = [1, ~), 
C = N * M, M = Multiple, C mod N = 0, C >= N, M = [1, ~), bisa dijadikan batas loop . berarti cari M terbesar sehingga C = N * M, dan N > 1
D mod N != 0, D = [1, ~)



Clean :
A <= N, B = [1, ~), C >= N, D = [1, ~)

Kemungkinan terbaik, N = A . Loop 
Kemungkinan terburuk, N = C


Loop dari iterator = A sampai C . nilai minimum A = 1. Worst Case loop dari 1 sampai C
kalau memenuhi syarat langsung break


Loop dari M = C/2, sampai 1 (Mencari M terbesar sehingga C = N * M, tentunya M terbesar yg mungkin adalah C/2 sehingga N = 2)
M = C / N


karena tentu N > 1, maka minimum N = 2
kalau memenuhi syarat langsung break

masalahnya, apakah 2 loop itu bisa dijadikan sekali jalan?


atau dibuat 2 Loop sekali jalan, dan di repeat sampai salah satu dapat
pengecekan dua arah


Best Solution
Misal C = N * Q, Q adalah multiple
kita haru mencari semua pasangan (N, Q) yang memenuhi C = N * Q
tentunya N xor Q <= sqrt(C) , sisanya >= 1 dan <= C
dan tentunya kita mencari N yang mungkin dan paling kecil


*/