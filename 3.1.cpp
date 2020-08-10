#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int F[5][5],dob=1;
	for (int i = 0; i < 5; i++) {
		for (int e = 0; e < 5; e++) {
			cout << "input F[" << i + 1 << ";" << e + 1 << "]: \n";
			cin>>F[i][e];
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int e = 0; e < 5; e++) {
			if (F[i][e] < 0) {
				dob*=F[i][e];
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int e = 0; e < 5; e++) {
			cout << setw(4) << F[i][e];
		}
		cout << endl;
	}
	cout << "Dob: " << dob;
}