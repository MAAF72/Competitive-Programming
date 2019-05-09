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
	int R, C;
	cin >> R >> C;
	
	piii Edge[C];
	for(int i = 0; i < C; i++) {
		int U, V, W;
		cin >> U >> V >> W;
		
		Edge[i] = make_pair(make_pair(--U, --V), W); //dikurangi karena index array start dari 0
	}
	
	auto comparator = [](piii P, piii Q) {
		return P.second < Q.second;
	};
		
	sort(Edge, Edge + C, comparator);
		
	vector<int> Link(R);
	for(int i = 0; i < R; i++) {
		Link[i] = i;
	}
		
	vector<int> Size(R, 1);
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
	for(int i = 0; i < C; i++) {
		piii P = Edge[i];
		if(!Same(P.first.first, P.first.second)) {
			Unite(P.first.first, P.first.second); //P.first itu pair, P.second itu Weight
			Result += P.second;
		}
	}
	
	cout << Result << endl;
	return 0;
}