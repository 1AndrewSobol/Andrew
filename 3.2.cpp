#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int F[7][7];
	for (int i = 0; i < 7; i++) {
		for (int e = 0; e < 7; e++) {
			cout << "input F[" << i + 1 << ";" << e + 1 << "]: \n";
			cin>>F[i][e];
		}
	}
	int max = F[0][0], min=F[6][0];
		for (int e = 0; e < 7; e++) {
			if (F[0][e] > max) {
				max=F[0][e];
			}
			if (F[6][e] < min) {
				min= F[6][e];
			}
		}

	for (int i = 0; i < 7; i++) {
		for (int e = 0; e < 7; e++) {
			cout << setw(4) << F[i][e];
		}
		cout << endl;
	}
	cout << "max: " << max << endl << "min: " << min << endl << "max-min: " << max - min << endl;
}