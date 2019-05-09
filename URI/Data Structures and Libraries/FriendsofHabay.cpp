#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
	string Name, Option;
	unordered_map<string, int> Person;
	while(cin >> Name && Name != "FIM") {
		cin >> Option;
		if(Person.find(Name) == Person.end()) {
			Person[Name] = ((Option == "YES") ? 1 : 0);
		} else {
			Person[Name]++;
		}
	}
	
	for(auto P : Person) {
		cout << P.first << " " << P.second << endl;
	}
		
	return 0;
}