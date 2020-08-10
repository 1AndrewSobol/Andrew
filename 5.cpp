#include <iostream>
#include <iomanip>
#include <cstdlib>


using namespace std;

void sort(int **a, int &rb) {
	int yol = 0;
	cout << endl << endl;
	for (int i = 0; i < rb; i++) {
		if (yol == 0) {
			for (int e = 0; e < rb; e++) {
				cout << setw(4) << a[i][e];
			}
		}
		else {
			for (int e = rb - 1; e >= 0; e--) {
				cout << setw(4) << a[i][e];
			}
		}
		cout << endl;
		if (yol == 0) { yol++; }
		else { yol = 0; }
	}
}

int main()
{
	int rb;
	cout << "Vvedit rozmirnist masyvu: \n";
	cin >> rb;
	int **a = new int*[rb];
	for (int i = 0; i < rb; i++) {
		a[i] = new int[rb];
	}
	for (int i = 0; i < rb; i++) {
		for (int e = 0; e < rb; e++) {
			/*cout << "Input a[" << e + 1 << ";" << i + 1 << "]: \n";
			cin >> a[i][e];*/
			a[i][e] = rand() % 15;
		}
	}

	

	for (int i = 0; i < rb; i++) {
			for (int e = 0; e < rb; e++) {
				cout << setw(4) << a[i][e];
			}
			cout<<endl;
		}

	
	sort(a, rb);

	for (int i = 0; i < rb; i++) {
		delete(a[i]);
	}
	delete(a);
}
