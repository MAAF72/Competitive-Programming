#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
	string S;
	map<string, string> Map;
	Map["brasil"] = "Feliz Natal!";
	Map["alemanha"] = "Frohliche Weihnachten!";
	Map["austria"] = "Frohe Weihnacht!";
	Map["coreia"] = "Chuk Sung Tan!";
	Map["espanha"] = "Feliz Navidad!";
	Map["grecia"] = "Kala Christougena!";
	Map["estados-unidos"] = "Merry Christmas!";
	Map["inglaterra"] = "Merry Christmas!";
	Map["australia"] = "Merry Christmas!";
	Map["portugal"] = "Feliz Natal!";
	Map["suecia"] = "God Jul!";
	Map["turquia"] = "Mutlu Noeller";
	Map["argentina"] = "Feliz Navidad!";
	Map["chile"] = "Feliz Navidad!";
	Map["mexico"] = "Feliz Navidad!";
	Map["antardida"] = "Merry Christmas!";
	Map["canada"] = "Merry Christmas!";
	Map["irlanda"] = "Nollaig Shona Dhuit!";
	Map["belgica"] = "Zalig Kerstfeest!";
	Map["italia"] = "Buon Natale!";
	Map["libia"] = "Buon Natale!";
	Map["siria"] = "Milad Mubarak!";
	Map["marrocos"] = "Milad Mubarak!";
	Map["japao"] = "Merii Kurisumasu!";

	while(cin >> S) {
		if(Map.count(S)) {
			cout << Map[S] << endl;
		} else {
			cout << "--- NOT FOUND ---" << endl;
		}
	}
	return 0;
}