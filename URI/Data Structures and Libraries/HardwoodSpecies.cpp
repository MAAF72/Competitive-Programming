#include <iostream>
#include <string>
#include <map>
#include <iomanip>

using namespace std;

int main() {
	int N;
	string Name, Ignore;
	cin >> N;
	cin.ignore();
	//cin >> Ignore;
	//cin.ignore();
	while(N--) {
		int Count = 0;
		getline(cin, Name);
		map<string, int> Map;
		if(Name != "") {
			Count++;
			Map[Name] = 1;
			cout << endl;
			//cout << Name << "Berhasil di isi" << endl;
		}
		while(getline(cin, Name) && Name != "") {
			Count++;
			//cout << Name << "Berhasil di isi" << endl;
			if(Map.find(Name) == Map.end()) {
				Map[Name] = 1;
			} else {
				Map[Name]++;
			}
		}
		
		
		for(auto M : Map) {
			cout << M.first << " " << fixed << setprecision(4) << (double)M.second * 100 / Count << endl;
		}
	}
	return 0;
}