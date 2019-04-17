#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);
	int n = 0;
do{
		int a = 0;
		double pi = 0;
		double s = 0;
		double g = 0;

		cout<< "Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):" << endl;
		cin >> n;

		if (n > 0){
			for (int a = 0; a < n+1; a++) {
				s = (pow(-1,a))/(2*a + 1);
				g = g + s;
	}
			pi = 4 * g;
			if (n != 1){
				cout << "The approximate value of pi using " << n+1 << " terms is: "<< pi << endl;
			}
			else {
				cout << "The approximate value of pi using " << n+1 << " term is: "<< pi << endl;
			}
		}

		else{
			exit(1);
	}
} while(n != -1);

}
