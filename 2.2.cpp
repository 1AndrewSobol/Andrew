#include <iostream>
#include <iomanip>
#include <cstdlib>


using namespace std;

int main()
{
	int p[8], t[8], h[8];
		for (int e = 0; e < 8; e++) {
			t[e] =  rand() % 78;
			h[e] = rand() % 42;
			p[e] = t[e] + h[e];
		}


		
		

	cout << endl;
	for (int i = 0; i < 8; i++) {
		for (int e = 7; e > 0; e--) {
			if (p[e] > p[e - 1]) {
				int ex = p[e];
				p[e] = p[e-1];
				p[e-1]=ex;
			}
		}
	}
	cout << endl << "P: ";
	for (int i = 0; i < 8; i++) {
			cout<<p[i]<<" ";
	}
	cout << endl<<"H: ";
	for (int i = 0; i < 8; i++) {
		cout << h[i] << " ";
	}
	cout << endl << "T: ";
	for (int i = 0; i < 8; i++) {
		cout << t[i] << " ";
	}
	
}
