#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int F[4][4];
	for (int i = 0; i < 4; i++) {
		for (int e = 0; e < 4; e++) {
			cout << "input F[" << i + 1 << ";" << e + 1 << "]: \n";
			cin>>F[i][e];
		}
	}
	int max = F[0][1], min=F[0][1], test=1;
		for (int e = 0; e < 4; e++) {
			for (int i = test; i < 4;i++) {
				if (F[e][i] > max) {
					max = F[e][i];
				}
				if (F[e][i] < min) {
					min = F[e][i];
				}
			}
			test++;
		}

	for (int i = 0; i < 4; i++) {
		for (int e = 0; e < 4; e++) {
			cout << setw(4) << F[i][e];
		}
		cout << endl;
	}
	cout << "max: " << max << endl << "min: " << min << endl << "sered: " << (max + min)/2 << endl;
}