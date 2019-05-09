#include <iostream>
#include <vector>
#include <utility>
#include <functional>
#include <algorithm>

using namespace std;
typedef pair<int, int> pii;
typedef pair<pii, int> piii;

int main() {
	ios_base::sync_with_stdio(0);
	int M, N;
	while(cin >> M >> N && M != 0 && N != 0) {
		piii Edge[N];
		int TotalLenghtPath = 0;
		for(int i = 0; i < N; i++) {
			int U, V, W;
			cin >> U >> V >> W;
			TotalLenghtPath += W;
			
			Edge[i] = make_pair(make_pair(U, V), W); //dikurangi karena index array start dari 0
		}
		
		auto comparator = [](piii P, piii Q) {
			return P.second < Q.second;
		};
			
		sort(Edge, Edge + N, comparator);
			
		vector<int> Link(M);
		for(int i = 0; i < M; i++) {
			Link[i] = i;
		}
			
		vector<int> Size(M, 1);
		//function<int(int)> = type signature, int pertama itu return, int kedua itu parameter
		function<int(int)> Find = [&Link](int X) {
			while(X != Link[X]) {
				X = Link[X];
			}
			
			return X;
		};
		
		function<bool(int, int)> Same = [&Find](int X, int Y) {
			return Find(X) == Find(Y);
		};
		
		function<void(int, int)> Unite = [&Find, &Link, &Size](int X, int Y) {
			X = Find(X);
			Y = Find(Y);
			if(Size[X] > Size[Y]) {
				swap(X, Y);
			}
			
			Size[Y] += Size[X];
			Link[X] = Y;
			
		};
		
		int Result = 0;
		for(int i = 0; i < N; i++) {
			piii P = Edge[i];
			if(!Same(P.first.first, P.first.second)) {
				Unite(P.first.first, P.first.second); //P.first itu pair, P.second itu Weight
				Result += P.second;
			}
		}
		
		cout << TotalLenghtPath - Result << endl;
	}
	
	return 0;
}
	