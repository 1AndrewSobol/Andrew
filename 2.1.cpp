#include <iostream>
#include <iomanip>
#include <cstdlib>



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
	int max = F[0][0], min=F[0][0];
		for (int e = 0; e < 4; e++) {
			for (int i = 0; i < 4;i++) {
				if (F[e][i] > max) {
					max = F[e][i];
				}
				if (F[e][i] < min && F[e][i]>0) {
					min = F[e][i];
				}
			}
		}

		for (int i = 0; i < 4; i++) {
			for (int e = 0; e < 4; e++) {
				cout << setw(4) << F[i][e];
			}
			cout << endl;
		}


		for (int i = 0; i < 4; i++) {
			for (int e = 0; e < 4; e++) {
				if (F[i][e] == 0) {
					F[i][e] = min * max;
				}
			}
		}
		cout <<"Ready: "<< endl;

	for (int i = 0; i < 4; i++) {
		for (int e = 0; e < 4; e++) {
			cout << setw(4) << F[i][e];
		}
		cout << endl;
	}
	cout << "max: " << max << endl << "min: " << min << endl;
}
