#include <iostream>
#include <string>

using namespace std;


int main()
{
	string slip = "", init = "", space="";
	int a = 0;
	getline(cin, init);
	for (int i = 0; i < init.size(); i++) {
		if (init.at(i) != ' ') {
			slip += init.at(i);
		}
			if (init.at(i) == ' ') {
			if (a == 1) {
				cout << endl << "Kilk symvoliv: " << slip.size()-1 << endl;
			}
				space+= slip;
			a++;
			slip = "";
		}
		
	}
	cout << space<<slip << endl;
}
