#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#define endl "\n"

using namespace std;

struct Compare
{
	template<typename T>
	bool operator()(const T& l, const T& r) const
	{
		if(l.second != r.second) {
			return l.second < r.second;
		}
		
		return l.first > r.first;
	}
};

int main() {
	string S;
	bool First = true;
	while(getline(cin, S)) {
		if(First) {
			First = false;
		} else {
			cout << endl;
		}
		map<char, int> Freq;
		for(auto C : S) {
			if(Freq.count(C) == 0) {
				Freq[C] = 1;
			} else {
				Freq[C]++;
			}
		}
		
		// create a empty vector of pairs
		set<pair<char ,int>, Compare> SetFreq(Freq.begin(), Freq.end());
		for (auto const &pair: SetFreq) {
			cout << (int)pair.first << " " << pair.second << endl;
		}
		
	}
	return 0;
}