#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

struct ProductData {
	string Name;
	double Price;
};

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int N, M, P, TempQty;
	ProductData TempProduct;
	string TempName;
	
	cin >> N;
	cout << fixed << setprecision(2);
	while(N--) {
		vector <ProductData> Product;
		cin >> M;
		for(int i = 0; i < M; i++) {
			cin >> TempProduct.Name >> TempProduct.Price;
			Product.push_back(TempProduct);
		}
		
		cin >> P;
		double Sum = 0;
		for(int i = 0; i < P; i++) {
			cin >> TempName >> TempQty;
			for(auto j = Product.begin(); j != Product.end(); ++j) {
				if(j->Name == TempName) {
					Sum += j->Price * TempQty;
					break;
				}
			}
		}
		cout << "R$ " << Sum << endl;
	}
	return 0;
}